#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <set>
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

	//int arr[5] = {7, 69, 2, 221, 8974};

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = i + 1; j < 5; j++)
	//	{
	//		if (arr[j] < arr[i])
	//		{
	//			//swap(arr[j], arr[j + 1]);
	//			int temp = 0;
	//			temp = arr[i];
	//			arr[i] = arr[j];
	//			arr[j] = temp;
	//		}
	//	}
	//	cout << arr[i];
	//}

	/*long long min64bit = LLONG_MAX;
	long long max64bit = 0;
	long long temp64bit = 0;

	for (int i = 0; i < 5; i++) {
		temp64bit = 0;
		for (int j = 0; j < 5; j++) {
			if (i == j)
				continue;
			temp64bit += arr[j];
		}
		if (temp64bit > max64bit)
			max64bit = temp64bit;
		if (temp64bit < min64bit)
			min64bit = temp64bit;
	}
	cout << min64bit << " " << max64bit;*/

	/*string test = "Pinewood";
	int len = test.length();
	int n = len - 1;
	for (int i = 0; i < (len / 2); i++)
	{
		swap(test[i], test[n]);
		n = n - 1;
	}
	cout << test << endl;*/

	//vector<int> ar;
	//ar.push_back(3);
	//ar.push_back(2);
	//ar.push_back(1);
	//ar.push_back(3);

	//for (int i = 0; i < ar.size(); i++)
	//{
	//	cout << ar[i];
	//}

	//int max = 0;
	//int cnt = 0;
	//for (int i = 0; i < ar.size(); i++)
	//{
	//	if (ar[i] > max)
	//	{
	//		cnt = 1;
	//		max = ar[i];
	//	}
	//	else if (ar[i] == max)
	//	{
	//		cnt += 1;
	//	}
	//}
	//cout << cnt << endl;

	string str = "Aa1325sdefsgh!!!";
	/*vector <char> newVec;
	int count = 0;
	for (int i = 0; i < str.length(); i++)
	{
		for (int j = i + 1; j < str.length(); j++)
		{
			if (tolower(str[i]) == tolower(str[j]))
			{
				newVec.push_back(str[i]);
				for (int x = 0; x < newVec.size(); x++)
				{
					
				}
				count++;
				break;
			}
		}
	}*/
	/*int count;
	set<char> S, Sd;
	for (char c : str)
	{
		if (!isalnum(c)) continue;
		c = tolower(c);
		if (!S.insert(c).second) Sd.insert(c);
	}
	return Sd.size();*/
	std::stringstream ss(str);
	std::vector<int> numbers;

	for (int i = 0; ss >> i; ) {
		numbers.push_back(i);
	}

	for (int i = 0; i < numbers.size(); i++)
	{
		cout << numbers[i];
	}
}