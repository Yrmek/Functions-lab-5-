//2. ����������� ������� � ���������;
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
    cout << " �������� ��� ���������� �������:\n"
        << FromUP << ".�� ��������\n"
        << WithRand << ".���������� �������\n"
        << FromDOWN << ".�� �����������\n";
    cout << "����� ������ ������ �������� ���������\n ��� �����: ";
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
        cout << "���-�� ���������" << AssignNum << endl;
        cout << "���-�� ������������" << CompNum << endl;

        cout << "sample sort" << endl;
        SampleSort(a, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "���-�� ���������" << AssignNum << endl;
        cout << "���-�� ������������" << CompNum << endl;
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
        cout << "���-�� ���������" << AssignNum << endl;
        cout << "���-�� ������������" << CompNum << endl;

        cout << "sample sort" << endl;
        SampleSort(a, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "���-�� ���������" << AssignNum << endl;
        cout << "���-�� ������������" << CompNum << endl;
        
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
        cout << "���-�� ���������" << AssignNum << endl;
        cout << "���-�� ������������" << CompNum << endl;

        cout << "sample sort" << endl;
        SampleSort(a, CompNum, AssignNum);
        for (int i = 0; i < N; i++)
            cout << setw(3) << a[i];
        cout << endl;
        cout << "���-�� ���������" << AssignNum << endl;
        cout << "���-�� ������������" << CompNum << endl;

        break;

    default:
        cout << "��������� �����������" << endl;
        return 0;
    }
}