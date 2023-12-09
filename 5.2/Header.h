#pragma once
#include <iostream>
#include <iomanip>
#include <time.h>           

using namespace std;

int rand(int array[], const int N);
float rand(float array[], const int N);
template <typename T > T up(T array[], int const N);
template <typename T> T down(T array[], int const N);

template <typename T, typename K> T InsertSort(T array[], int const N, K&, K&);
template <typename T, typename K> T SampleSort(T array[], int const N, K&, K&);

int rand(int array[], const int N)
{
    srand(time(NULL));
    for (int i = 0; i < N; i++)
        array[i] = rand() % 100;
    return array[N];
}

float rand(float array[], const int N)
{
    srand(time(NULL));
    for (int i = 0; i < N; i++)
        array[i] = 0.1 * (rand()%10) * (rand() % 100);
    return array[N];
}

template <typename T> T down(T array[],int const N)
{
    srand(time(NULL));
    array[0] = (-rand() % 100);
    for (int i = 1; i < N; i++)
    {
        array[i] = array[i - 1] + (rand() % 10);
    }
    return array[N];
}

template <typename T> T up(T array[], int const N)
{
    srand(time(NULL));
    array[0] = (rand() % 100);
    for (int i = 1; i < N; i++)
    {
        array[i] = array[i - 1] - (rand() % 10);
    }
    return array[N];
}

template <typename T, typename K> T SampleSort(T array[], int const N, K &Comp , K &Assign)
{
    for (int i = 0; i < N - 1; i++)
    {
        T min = array[i];
        Assign++;
        int tempmin = i;
        for (int j = i + 1; j < N; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
                Assign++;
                tempmin = j;
            }
            array[tempmin] = array[i];
            array[i] = min;
            Assign += 2;
            Comp++;
        }
    }
    return array[N] , Comp , Assign;
}

template <typename T, typename K> T InsertSort(T array[],int const N, K &Comp, K &Assign)
{
    for (int i = 0; i < N; i++)
    {
        T x = array[i];
        Assign++;
        int j = i - 1;
        Comp ++;
        while (x < array[j])
        {
            array[j + 1] = array[j];
            Assign++;
            j--;
            if (j < 0) break;
            Comp++;
        }
        array[j + 1] = x;
        Assign++;
    }
    return array[N], Comp, Assign;
}