#include "intBinaryTree.h"

using namespace std;

void intBinaryTree::insertNode(int num)
{
	TreeNode* newNode, //Pointer to a new node
		* nodeptr; //Pointer to traverse the tree

	//Create a new node

	newNode = new TreeNode;
	newNode->value = num;
	newNode->left = newNode->right = NULL;
	
	if (!root) //Is the tree empty?
		root = newNode;
	else {
		nodeptr = root;
		while (nodeptr != NULL)
		{
			if (num < nodeptr->value)
			{
				if (nodeptr->left)
				{
					nodeptr = nodeptr->left;
				}
				else {
					nodeptr->left = newNode;
					break;
				}
			}
			else if (num > nodeptr->value)
			{
				if (nodeptr->right)
				{
					nodeptr = nodeptr->right;
				}
				else {
					nodeptr->right = newNode;
					break;
				}
			}
			else {
				std::cout << "Duplicate value found in tree" << std::endl;
				break;
			}

		}
	}
}
void intBinaryTree::remove(int num)
{
	deleteNode(num, root);
}
void intBinaryTree::deleteNode(int num, TreeNode*&nodePtr)
{
	if (num < nodePtr->value)
	{
		deleteNode(num, nodePtr->left);
	}
	else if (num > nodePtr->value)
	{
		deleteNode(num, nodePtr->right);
	}
	else
		makeDeletion(nodePtr);
}

void intBinaryTree::makeDeletion(TreeNode*& nodePtr)
{
	TreeNode* tempNodePtr;

	if (nodePtr == NULL)
	{
		cout << "Cannot delete empty node" << endl;

	}
	else if (nodePtr->right == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left; //Reattach the left child
		delete tempNodePtr;
	}

	else if (nodePtr->left == NULL)
	{
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->left;
		delete nodePtr;
	}
	else {
		//Move to the right
		tempNodePtr = nodePtr->right;
		//Go to the end left node
		while (tempNodePtr->left)
		{
			tempNodePtr = tempNodePtr->left;
		}
		tempNodePtr->left = nodePtr->left;
		tempNodePtr = nodePtr;
		nodePtr = nodePtr->right;
		delete tempNodePtr;
	}
}

void intBinaryTree::displayInOrder(TreeNode* nodePtr)
{
	if (nodePtr)
	{
		displayInOrder(nodePtr->left);
		cout << nodePtr->value << endl;
		displayInOrder(nodePtr->right);
	}
}

void intBinaryTree::displayPreOrder(TreeNode* nodePtr)
{
	if (nodePtr)
	{
		cout << nodePtr->value << endl;
		displayPreOrder(nodePtr->left);
		displayPreOrder(nodePtr->right);
	}	
}

void intBinaryTree::displayPostOrder(TreeNode* nodePtr)
{
	if (nodePtr)
	{
		displayPostOrder(nodePtr->left);
		displayPostOrder(nodePtr->right);
		cout << nodePtr->value << endl;
	}
}