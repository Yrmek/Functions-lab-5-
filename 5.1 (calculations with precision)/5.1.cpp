//Выполнить задания, оформив через функции.Все необходимые данные для
//функций должны передаваться в качестве параметров.Результат функции полу -
//чить тремя способами : через механизм return, через параметр - указатель, через
//ссылочный параметр.
//Дано действительное число х(0 < x  1).Вычислить заданную сумму с точно -
//	стью  = 10–6 и указать количество слагаемых.Считать, что требуемая точ -
//	ность достигнута, если очередное слагаемое по абсолютному значению меньше .
//	Примечание.В программе не использовать математические функции из библио -
//	теки math.h.

#include <iostream>

using namespace std ;

long  fact(int);
double mypow(double, long);
double dabs(double);

int main()
{
	const double epsilon = mypow(10,(-6));
	double x = 0;
	cout << "enter value of x ( 0 < x <= 1)" << endl;
	cin >> x;
	if (x > 1 || x < 0)
	{
		cout << "You entered incorrect value" << endl;
		return 1;
	}
	else
	{
		double sum = 0;
		double temp = 0;
		int k = 1;
		do
		{
			temp = mypow((-1), k) * mypow(x, 4 * k + 3) / (4 * k + 3) / fact(2 * k + 1);
			sum += temp;
			k++;
		} while (dabs(temp) > epsilon);
		
		int counter = 0;
		counter = k;
		cout << "result of summation:" << sum << endl;
		cout << "amount of summations:" << counter - 1 << endl;
	}
	return 0;
}

double dabs(double n)
{
	return (n < 0) ? -n : n;
}

double mypow(double base, long pow)
{
	double result = base;
	if (pow == 1 || base == 1)
		return result;
	else
	{
		double k = dabs(pow);
		for (int i = 2; i <= k; i++)
		{
			result *= base;
		}
		if (pow < 0) result = 1 / result;
		return result;
	}
}

long  fact(int n)
{
	long result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
