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
	const int P = 20;
	char S[N];
	cout << "Enter string :" << endl;
	cin.getline(S, N);
	char tempS[N]{};
	strcat_s(tempS,N,S);
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
			char S2[P] = {'('};
			switch (amount)
			{
			case 1: strcat_s(S2, "1"); break;
			case 2: strcat_s(S2, "2"); break;
			case 3: strcat_s(S2, "3"); break;
			case 4: strcat_s(S2, "4"); break;
			case 5: strcat_s(S2, "5"); break;
			case 6: strcat_s(S2, "6"); break;
			case 7: strcat_s(S2, "7"); break;
			case 8: strcat_s(S2, "8"); break;
			case 9: strcat_s(S2, "9"); break;
			}
			strcat_s(S2,")");
			char temp[P] = {};
			temp[0] = *(S + i + k);
			strcat_s(S2,temp);
			/*char S2[P] = {'(',amount,')',*(S + i + k)}; */
			char S1[P]{};
			S1[0] = '\0';
			for (int j = 0; j < amount; j++)
			{
				S1[j] = *(S + i + k);
			}
			replaceSubstring(S, S1, S2);
		}
	}
	cout <<"Changed string : "<< S;
	return 0;
}