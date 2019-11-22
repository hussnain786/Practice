#include <iostream>
#include "list.h"

using namespace std;

int main()
{
	list n;
	n.createNode(10);
	n.createNode(20);
	n.createNode(30);
	n.createNode(49);

	n.displayNode();

	int curr = n.findNode(20);
	cout << curr << endl;

	n.detectLoop();

	return 0;
}