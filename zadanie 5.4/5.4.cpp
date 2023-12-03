/*��������� ������� ��� ��������� C-������, ������ ����������� �������. 

2. �������� ������� ������ ��������� S1 (���������� �������� ������� ������� � ����������� ��������) �� ��������� S2 � ������ S.
��������� ��� �������, ��������� ������ �������� ������, �. �. �������� ������ ����� ������ ������ �������� �� (k)s, ��� s � ����������� ������, a k � ���������� ��� ����������.
*/

#include <iostream>
#include <string.h>
#include <iomanip>
#include "Header.h"

using namespace std;

int main()
{
	const int P = 10;
	char S[N];
	cout << "Enter string :" << endl;
	cin.getline(S, N);
	char tempS[N]{};
	strcat_s(tempS,N,S);
	/*cout << "Enter value of Symbol position and value of length " << endl;*/
	int amount = 0;
	/*cin >> pos >> amount;*/

	for (int i = 0; i < strlen(S); i++)
	{
		amount = 1;
		int k = 0;
		while (*(S + i + k) == *(S + i + k + 1))
		{
			amount++;
			k++;
		}
		if (amount > 1)
		{
			char S2[N] = { '(',amount,')',*(S + i + k)};
		/*	int TempAmount = amount;
			if (amount < 4) TempAmount = 4;
			if (amount > 4 ) TempAmount = 5;*/
			char* pS2 = 0;
			pS2 = &S2[0];
			S1_S2(S, tempS, N, pS2, i, amount);
		}
	}
	cout <<"Changed string :  "<< S;
	return 0;
}