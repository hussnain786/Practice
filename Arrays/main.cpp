#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

void selectionSort(int a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[minIndex])
			{
				minIndex = j;
			}
		}
		swap(a[minIndex], a[i]);
	}
}

void bubbleSort(int a[], int n)
{
	bool isSorted = false;
	while (isSorted != true)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (a[i] > a[j])
				{
					swap(a[i], a[j]);
					isSorted = false;
				}
			}
		}
		isSorted = true;
	}
}
int main()
{
	int arr[10] = {20,10,9,24,18,19,21,34,23,39};
	sort(arr, arr + 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] <<" ";
	}

	int a[] = { 2,4,1,5,3 };
	int n = 5;

	bubbleSort(a, n);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}