
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