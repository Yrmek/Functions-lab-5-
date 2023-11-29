//2. сортировкой выбором и вставками;
#include <iostream>
#include <iomanip>
#include <time.h>   
#include "Header.h"

using namespace std;

int main()
{
    float a[N];
    int CompNum = 0, AssignNum = 0;

    enum  enmArrayInit
    {
        FromUP = 1, WithRand, FromDOWN,
    };
    setlocale(LC_ALL, "rus");
    cout << " Выберите тип заполнения массива:\n"
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
        InsertSort(a,CompNum,AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;

        cout << "sample sort" << endl;
        SampleSort(a, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;
        break;

    case WithRand:
        rand(a);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        cout << "insert sort" << endl;
        InsertSort(a, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;

        cout << "sample sort" << endl;
        SampleSort(a, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;
        
        break;

    case FromDOWN:
        down(a);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;

        cout << "insert sort" << endl;
        InsertSort(a, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "Кол-во сравнений" << AssignNum << endl;
        cout << "Кол-во присваиваний" << CompNum << endl;

        cout << "sample sort" << endl;
        SampleSort(a, CompNum, AssignNum);
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