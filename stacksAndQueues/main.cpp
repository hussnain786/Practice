#include <iostream>
#include<queue>
#include<stack>

using namespace std;

int main()
{
	queue<int> myQ;
	for (int i = 0; i < 10; i++)
	{
		cout << "ENQUEUING: " << i << endl;
		myQ.push(i); //9tail, 0 head
	}

	cout << "Size of myQ: " << myQ.size() << endl;

	cout << "The back of myQ: " << myQ.back() << endl;

	while (!myQ.empty())
	{
		cout << "DEQUEUING: " << myQ.front() << endl;
		myQ.pop();
	}

	stack<int> myStack;

	myStack.push(5);
	myStack.push(3);
	myStack.push(2);

	cout << "Number of ints on the stack: " << myStack.size() << endl;

	while (!myStack.empty())
	{
		cout << "POPPING: " << myStack.top() << endl;
		myStack.pop();
	}
	cout << "Number of ints on the stack: " << myStack.size() << endl;
	

	return 0;
}	