#pragma once
#include <iostream>
#include <iomanip>
#include <time.h>  

using namespace std;

int const N = 5;

template <typename T> T* myrand(T (*array)[N])
{
    srand(time(NULL));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            array[i][j] = rand() % 100;
    return *array ;
}

template <typename T> T* myprint(T (*array)[N])
{
        for (int i = 0; i < N; i++)
        {
            cout << " " << endl;
            for (int j = 0; j < N; j++)
                cout <<right<< setfill(' ') << "|" << array[i][j] << left << setw(3) << "|";
        }
        return *array;
}

template <typename T> T* CollumnBublleSort(T(*array)[N])
{
    for (int k = 0; k < N - 1; k++)
    {
        for (int j = 0; j < N-1; j++)
        {
            if (array[0][j] < array[0][j + 1])
            {
                for (int i = 0; i < N; i++)
                {
                    swap(array[i][j], array[i][j + 1]);
                }
            }
        }
    }
    return *array;
}