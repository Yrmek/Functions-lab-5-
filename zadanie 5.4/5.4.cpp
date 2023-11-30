/*¬ыполнить задание дл€ введенной C-строки, создав необходимые функции. 

2. Ќаписать функцию замены подстроки S1 (задаваемую позицией первого символа и количеством символов) на подстроку S2 в строке S.
»спользу€ эту функцию, выполнить сжатие заданной строки, т. е. заменить вс€кую серию подр€д идущих символов на (k)s, где s Ц повтор€емый символ, a k Ц количество его повторений.
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