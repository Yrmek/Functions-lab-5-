﻿/*Выполнить задание, оформив его через функции(ввода, вывода, сортировки).Пе -
редачу массива в функции организовать через указатели.
Дана действительная матрица порядка n× m.Перебор строк / столбцов мат -
рицы осуществить с использованием указателей.Обосновать выбор метода сор -
тировки.

2. Упорядочить столбцы по невозрастанию первых элементов.
*/

#include <iostream>
#include <iomanip>
#include <time.h>
#include "Header.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int a[N][N];
	int* ptr = &a[0][0];
	myrand(a);
	myprint(a);
	CollumnBublleSort(ptr);
	cout << " " << endl;
	cout << "Отсортированный массив:" << endl;
	myprint(a);
	return 0;
}