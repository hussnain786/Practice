#include <iostream>
#include <vector>

using namespace std;

int fib(int n)
{
	int result;
	if (n == 1 || n == 2)
	{
		result = 1;
	}
	else {
		result = fib(n - 1) + fib(n - 2);
	}
	return result;
}

int fib_2(int n)
{
	/*vector<int> result(n);
	result[0] = result[1] = 1;
	for (int i = 2; i < n; i++)
	{
		result[i] = result[i - 1] + result[i - 2];
		return result[n - 1] + result[n - 2];
	}*/
	vector<int> newVec;
	newVec[n + 2];
	int i;
	int* arr = new int[n +1];

	newVec[0] = 0;
	newVec[1] = 1;

	for (i = 2; i < n; i++)
	{
		newVec[i] = newVec[i - 1] + newVec[i - 2];
	}

	delete[]arr;
	return newVec[n];


}
int main()
{
	int newR;
	newR = fib(40);
	cout << "Fib = " << newR << endl;
	return 0;
}