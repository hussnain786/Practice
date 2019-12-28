#include <iostream>

using namespace std;

int main()
{
	//staircase problem
	/*int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int s = 0; s < n - i; s++)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "#";
		}
		cout << endl;
	}*/

	int arr[5] = {7, 69, 2, 221, 8974};

	for (int i = 0; i < 5; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[j] < arr[i])
			{
				//swap(arr[j], arr[j + 1]);
				int temp = 0;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		cout << arr[i];
	}
}