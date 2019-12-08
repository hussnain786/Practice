#include <iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream myFile("test.dat");
	if (!myFile)
	{
		cout << "File cannot be opened" << endl;
		return 1;
	}

	myFile << "This is a test \n";
	myFile.close();
	return 1;
}