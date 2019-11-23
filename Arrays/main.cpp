#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[10] = {20,10,9,24,18,19,21,34,23,39};
	sort(arr, arr + 10);
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] <<" ";
	}
	return 0;
}