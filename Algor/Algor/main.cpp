#include<iostream>
#include"fun.h"
#include"Student.h"
#include"sortHelper.h"
using namespace std;

int main()
{
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	float farr[10] = { 20, 19, 18, 17, 16, 15, 14, 13, 12, 11 };
	Student st[4] = { { "D", 10 }, { "C", 9 }, { "B", 8 }, { "A", 7 } };

	int n = 1000;
	int *array = SortHelper::geRandArr(n, 0, n);
	//SelectionSort(array, n);
	SortHelper::testSort("SelectionSort", SelectionSort, array, n);

	//SortHelper::printArr(array, n);

	delete[] array;

	system("pause");
	return 0;

}