#pragma once
#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
const int N = 100;

void replaceSubstring(char *s, char *s1, char *s2) 
{

    int s1Len = strlen(s1);
    int s2Len = strlen(s2);
    char *p = strstr(s, s1);
    if (p) 
    {
        char temp[N + 1];
        strncpy_s(temp, s, p - s);
        temp[p - s] = '\0';
        strcat_s(temp, s2);
        strcat_s(temp, p + s1Len);
        strcpy_s(s,N,temp);
    }
}