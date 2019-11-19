
#pragma once

struct node
{
	int value;
	node* next;
};
class list
{
private:
	node* head, * tail;
public:
	void createNode(int value);
	void displayNode();
};