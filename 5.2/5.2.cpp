//2. сортировкой выбором и вставками;
#include <iostream>
#include <iomanip>
#include <time.h>           

using namespace std;

int const N = 10;

int rand(int array[N]);
int up(int array[N]);
int down(int array[N]);

int InsertSort(int array[N]);
int SampleSort(int array[N]);

int main()
{
    int a[N];

    enum  enmArrayInit
    {
        FromUP = 1, WithRand, FromDOWN,
    };

    setlocale(LC_ALL, "rus");
    cout << " Выберите тип инициализации:\n"
        << FromUP << ".по убыванию\n"
        << WithRand << ".случайными числами\n"
        << FromDOWN << ".по возрастанию\n";
    cout << "Любая другая кнопка завершит программу\n Ваш выбор: ";
    int ch = 0;    cin >> ch;
    switch (ch)
    {
    case FromUP:
        up(a);

        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        cout << "insert sort" << endl;
        InsertSort(a);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        cout << "sample sort" << endl;
        SampleSort(a);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        break;

    case WithRand:
        rand(a);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        cout << "insert sort" << endl;
        InsertSort(a);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        cout << "sample sort" << endl;
        SampleSort(a);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        
        break;

    case FromDOWN:
        down(a);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        cout << "insert sort" << endl;
        InsertSort(a);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        cout << "sample sort" << endl;
        SampleSort(a);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        break;

    default:
        cout << "Программа завершается" << endl;
        return 0;
    }
}

int rand(int array[N])
{
    srand(time(NULL));
    for (int i = 0; i < N; i++)
        array[i] = rand() % 100;
    return array[N];
}

int up(int array[N])
{
    srand(time(NULL));
    array[0] = (rand() % 100);
    for (int i = 1;i < N; i++)
    {
        array[i] = array[i-1] - (rand() % 10);
    }
    return array[N];
}

int down(int array[N])
{
    srand(time(NULL));
    array[0] = (-rand() % 100);
    for (int i = 1; i < N; i++)
    {
        array[i] = array[i-1] + (rand() % 10);
    }
    return array[N];
}

int InsertSort(int array[N])
{
    for (int i = 0; i < N; i++)
    {
        int x = array[i];
        int j = i - 1;
        
        while (x < array[j])
        {
            array[j + 1] = array[j];
            j--;
            if (j < 0) break;
        }
        array[j + 1] = x;
    }
    return array[N];
}

int SampleSort(int array[N])
{
    for (int i = 0; i < N - 1; i++)
    {
        int min = array[i];
        int tempmin = i;
        for (int j = i + 1; j < N; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                tempmin = j;
            }
            array[tempmin] = array[i];
            array[i] = min;
        }
    }
    return array[N];
}