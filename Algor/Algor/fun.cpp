
#include<algorithm>

//选择法排序
template<typename T>
void SelectionSort(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int minIndex = i;
		//寻找[i,n)范围内最小值
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