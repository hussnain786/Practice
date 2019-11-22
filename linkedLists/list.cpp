#include <iostream>
#include "list.h"

using namespace std;

void list::createNode(int value)
{
	node* temp = new node; //Creating a new temp node

	temp->value = value; //temp value = int value
	temp->next = NULL; //temp.next = Null to make sure it adds to the end of the list

	if (head == NULL)
	{
		head = temp;
		tail = temp;
		temp = NULL;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

void list::displayNode()
{
	node* temp = new node;

	temp = head;

	while (temp != NULL)
	{
		cout << temp->value << endl;
		temp = temp->next;
	}
}

int list::findNode(int value)
{
	node* temp = head;
	int currIndex = 1;
	while (temp && temp->value != value)
	{
		temp = temp->next;
		currIndex++;
	}
	if (temp) return currIndex;

	return 0;
}

bool list::detectLoop()
{
	node* slow = head;
	node* fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			cout << "Loop found" << endl;
			return true;
		}
	}
	cout << "Loop not found" << endl;
	return false;
}
