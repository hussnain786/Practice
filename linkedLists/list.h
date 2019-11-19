#pragma once

struct node
{
public:
	int value;
	node* next;
};

class list
{
private:
	node* head, * tail;
public:
	list()
	{
		head = NULL;
		tail = NULL;
	}
	void createNode(int value);
	void displayNode();
};