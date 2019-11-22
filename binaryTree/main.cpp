#include <iostream>
#include"intBinaryTree.h"

using namespace std;

int main()
{
	intBinaryTree tree;

	cout << "Inserting nodes. " << endl;
	tree.insertNode(5);
	tree.insertNode(8);
	tree.insertNode(3);
	tree.insertNode(12);
	tree.insertNode(9);
	cout << "Done" << endl;

	cout << "Inorder traversal" << endl;
	tree.showNodesInOrder();

	
	cout << "Deleting 12.." << endl;
	tree.remove(5);

	tree.showNodesInOrder();
	return 0;
}