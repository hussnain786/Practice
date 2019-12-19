#include <iostream>
#include<fstream>

using namespace std;

int main()
{
	/*ofstream myFile("test.dat");
	if (!myFile)
	{
		cout << "File cannot be opened" << endl;
		return 1;
	}

	myFile << "This is a test \n";
	myFile.close();
	return 1;*/

	/*try {
		cout << "Throwing an integer exception";
		throw 42;
		cout << "It should be impossible to see this message";
	}
	catch (int i)
	{
		cout << "the integer exception was caught with the value " << i << endl;
	}*/

	double num1 = 0, num2 = 0;
	cout << "Number 1:" << endl;
	cin >> num1;
	cout << "Number 2:" << endl;
	cin >> num2;

	try {
		if (num2 == 0)
		{
			throw "Division by zero not possible";
		}
		else {
			cout<< "Division can be done";
		}
	}
	catch (const char* exp)
	{
		cout << "Error: " << exp << endl;
	}
	
}