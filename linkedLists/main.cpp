#include <iostream>
#include "list.h"

using namespace std;

int main()
{
	list n;
	n.createNode(10);
	n.createNode(20);

	n.displayNode();

	return 0;
}