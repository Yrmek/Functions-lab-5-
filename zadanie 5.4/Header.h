#pragma once
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

const int N = 100;

char *S1_S2(char *S1,char *temp,const int n,char *S2, int pos, int amount)
{
	strncpy_s(S1 + pos,n,S2,4);
	strcat_s(S1, n, temp + amount + pos);
	return S1;
}