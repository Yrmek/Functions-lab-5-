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
	const int P = 5;
	char S[N], S2[P];
	cout << "Enter string :" << endl;
	cin.getline(S, N);
	cout << "Enter string :" << endl;
	cin.getline(S2, P);
	char* pS2 = 0;
	pS2 = &S2[0];
	cout << "Enter value of Symbol position and value of length " << endl;
	int pos = 0, amount = 0;
	cin >> pos >> amount;

	S1_S2(S, pS2, pos, amount);
	cout <<"Changed string :  "<< S;
	return 0;
}