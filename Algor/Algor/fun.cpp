
#include<algorithm>

//ѡ������  
template<typename T>
void SelectionSort(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int minIndex = i;
		//Ѱ��[i,n)��Χ����Сֵ
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}
		std::swap(arr[i], arr[minIndex]);
	
	}

}

//���뷨����
template <typename T>
void insertionSort(T arr[], int n)
{
	for (int i = 1; i < n; i++)
	{

		for (int j = i; j>0 ; j--)
		{
			if (arr[j] < arr[j - 1])
			{
				std::swap(arr[j], arr[j - 1]);
			}
			else
			{
				break;
			}
		}
	}

}

//�Ľ���������
template <typename T>
void insertionSort2(T arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int j ;
		T temp = arr[i];
		for (j = i; j>0 && arr[j-1]>temp; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;

	}

}