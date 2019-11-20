#include <iostream>
#pragma once
class intBinaryTree
{
public:
	struct TreeNode
	{
		int value;
		TreeNode* left;
		TreeNode* right;
	};

	TreeNode* root;
	void destroySubTree(TreeNode*);
	void deleteNode(int, TreeNode *&);
	void makeDeletion(TreeNode *&);
	void displayInOrder(TreeNode*);
	void displayPreOrder(TreeNode*);
	void displayPostOrder(TreeNode*);
	intBinaryTree()
	{
		root = NULL;
	}
	~intBinaryTree()
	{
		//destroySubTree(root);
	}
	void insertNode(int);
	bool searchNode(int);
	void remove(int);
	void showNodesInOrder(void)
	{
		displayInOrder(root);
	}
	void showNodesPreorder()
	{
		displayPreOrder(root);
	}
	void showNodesPostOrder()
	{
		displayPostOrder(root);
	}
};