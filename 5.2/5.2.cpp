//2. сортировкой выбором и вставками;
#include <iostream>
#include <iomanip>
#include <time.h>
#include <math.h>
#include "Header.h"

using namespace std;

int main()
{
    int const N = 6;
    float a[N];
    int CompNum = 0, AssignNum = 0;
    int Mins = 0, Cins = 0;
    int Msamp = 0, Csamp = 0;
    Cins = 1 / 2.0 * (N * N + N) - 1;
    Mins = 1 / 2.0 * (N * N + 3 * N - 4);
    Msamp = labs(N * N / 4) + 3 * (N - 1);
    Csamp = (N * N - N) / 2;
    cout << "Amount of assignments(Insert sort | Sample sort) :" << Mins << " | " << Msamp << endl;
    cout << "Amount of comparsions(Insert sort | Sample sort) :" << Cins << " | " << Csamp << endl;
    enum  enmArrayInit
    {
        FromUP = 1, WithIntRand, WithFloatRand, FromDOWN,
    };
    setlocale(LC_ALL, "rus");
    cout << " Выберите тип заполнения массива:\n"
        << FromUP << ".по убыванию\n"
        << WithIntRand << ".случайными int числами\n"
        << WithFloatRand << ".случайными float числами\n"
        << FromDOWN << ".по возрастанию\n";
    cout << "Любая другая кнопка завершит программу\n Ваш выбор: ";
    int ch = 0;    cin >> ch;
    switch (ch)
    {
    case FromUP:
        up(a,N);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        cout << "insert sort:" << endl;
        InsertSort(a,N,CompNum,AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(8) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;

        cout << "sample sort:" << endl;
        SampleSort(a,N,CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;
        break;

    case WithIntRand:;
       (int)rand(a,N);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        cout << "insert sort:" << endl;
        InsertSort(a,N, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;

        cout << "sample sort:" << endl;
        SampleSort(a,N, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;
        
        break;
    case WithFloatRand:
        rand(a,N);
        for (int i = 0; i < N; i++)
            cout << setw(8) << a[i];
        cout << endl;

        cout << "insert sort:" << endl;
        InsertSort(a,N, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(8) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;

        cout << "sample sort:" << endl;
        SampleSort(a,N, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(8) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;

        break;

    case FromDOWN:
        float a[N];
        down(a,N);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        cout << "insert sort:" << endl;
        InsertSort(a,N, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;

        cout << "sample sort:" << endl;
        SampleSort(a,N, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;

        break;

    default:
        cout << "Программа завершается" << endl;
        return 0;
    }
}