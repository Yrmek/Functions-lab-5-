#pragma once
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

const int N = 100;

char *S1_S2(char *S1,char *S2, int pos, int amount)
{
	int i = 0;
	int end = amount + pos;
	for (pos; pos <= end; pos++)
	{
		S1[pos] = *(S2 + i);
		i++;
	}
	return S1;
}