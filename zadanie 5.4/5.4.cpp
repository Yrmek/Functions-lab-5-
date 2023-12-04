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
	const int P = 10;
	char S[N];
	cout << "Enter string :" << endl;
	cin.getline(S, N);
	char tempS[N]{};
	int amount = 0;

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
			for (int g = 0; g < strlen(S); g++)
			{
				tempS[g] = *(S + g);
			}
			char S2[N] = { '(',amount,')',*(S + i + k)};
			char* pS2 = 0;
			pS2 = &S2[0];
			S1_S2(S, tempS, N, pS2, i, amount);
		}
	}
	cout <<"Changed string :  "<< S;
	return 0;
}