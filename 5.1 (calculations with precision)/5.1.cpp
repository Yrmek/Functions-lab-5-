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
double pow(double, long);
double dabs(double);

int main()
{
	const double epsilon = pow(10,(-6));
	double x = 0;
	cout << "enter value of x ( 0 < x <= 1)" << endl;
	cin >> x;
	if (x > 1 || x < 0)
	{
		cout << "You entered incorrect value" << endl;
		return 0;
	}
	else
	{

		double sum = 0;
		double temp = 0;
		int k = 1;
		do
		{
			temp = sum;
			sum = pow((-1), k) * pow(x, 4 * k + 3) / (4 * k + 3) / fact(2 * k + 1);
			k++;
		} while (dabs(sum - temp) > epsilon);
		
		int counter = 0;
		k == 2 ? counter = 1 : counter = k;
		cout << "result of summation:" << sum << endl;
		cout << "amount of summations:" << counter << endl;
		return 0;
	}
}

double dabs(double n)
{
	return (n < 0) ? -n : n;
}

double pow(double base, long pow)
{
	if (pow == 1) return base;
	else
	{
		for (int i = 2; i <= pow; i++)
		{
			base *= base;
		}
		return base;
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
