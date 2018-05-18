#include<iostream>
#include"fun.h"
using namespace std;

int main()
{
	int arr[10] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	SelectionSort(arr, 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	cout << endl;

	system("pause");
	return 1;

}