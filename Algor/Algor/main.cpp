#include<iostream>
#include"fun.h"
#include"Student.h"
#include"sortHelper.h"
using namespace std;

#include<ctime>

int main()
{


	int n = 10000;
	//int *arr = SortHelper::geRandArr(n, 0, n);
	int *arr = SortHelper::geNearArr(n, 100);
	int *arr2 =SortHelper::copyIntArray(arr, n);

	//SelectionSort(array, n);
	SortHelper::testSort("SelectionSort", SelectionSort, arr, n);
	SortHelper::testSort("insertionSort2", insertionSort2, arr2, n);

	//SortHelper::printArr(arr2, n);

	delete[] arr;
	delete[] arr2;

	system("pause");
	return 0;

}