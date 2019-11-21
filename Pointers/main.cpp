#include <iostream>

using namespace std;

int main()
{
	cout << "\tPointers" << endl;
	int number = 8;
	cout << "The address of the number " << number << " is: " << &number << endl;
	/*
	int* pOne; //pOne is a pointer to an integer
	float* pTwo; //pTwo is a pointer to a float
	*/

	int* pVariable;
	int variable = 100;

	cout << "The value of the variable is: " << variable << endl;
	cout << "The address of the variable is: " << &variable << endl;

	pVariable = &variable; //Assigning the address of variable to the pointer

	cout << "The value stored in the pointer is " << *pVariable << endl;
	cout << "The address of the pointer is " << pVariable << endl;
	


	return 0;
}