#include<iostream>
#include "hash.h"

hash::hash()
{
	for (int i = 0; i < tableSize; i++)
	{
		HashTable[i] = new item;
		HashTable[i]->name = "Empty";
		HashTable[i]->favDrink = "Empty";
		HashTable[i]->next = NULL;
	}
}

int hash::Hash(std::string key)
{
	int hash = 0;
	int index;


	for (int i = 0; i < key.length(); i++)
	{
		hash += (int)key[i];
	}

	index = hash % tableSize;

	return index;
}

void hash::AddItem(std::string name, std::string drink)
{
	int index = Hash(name);

	if (HashTable[index]->name == "Empty")
	{
		HashTable[index]->name = name;
		HashTable[index]->favDrink = drink;
	}

	else 
	{
		item* ptr = HashTable[index];
		item* n = new item;
		n->name = name;
		n->favDrink = drink;
		n->next = NULL;
		while (ptr->next != NULL)
		{
			ptr = ptr->next; //list traversing to find the last
		}
		ptr->next = n;

	}
}

int hash::numberOfItemsInIndex(int index)
{
	int count = 0;
	if (HashTable[index]->name == "Empty")
	{
		return count;
	}
	else
	{
		count++;
		item* ptr = HashTable[index];
		while (ptr->next != NULL)
		{
			count++;
			ptr = ptr->next;
		}
	}

	return count;
}

void hash::printTable()
{
	int number; //number of elements in each bucket
	for (int i = 0; i < tableSize; i++)
	{
		number = numberOfItemsInIndex(i);
		std::cout << "-------------\n" << std::endl;
		std::cout << "Index = " << i << std::endl;
		std::cout << HashTable[i]->name << std::endl;
		std::cout << HashTable[i]->favDrink << std::endl;
		std::cout << "# of items = "<< number << std::endl;
		std::cout << "-------------\n" << std::endl;
	}

}

void hash::printItemsInIndex(int index)
{
	item* ptr = HashTable[index];
	if (ptr->name == "Empty")
	{
		std::cout << "Index: " << index << "is empty" << std::endl;
	}
	else 
	{
		std::cout << "Index: " << index << " contains the following:" << std::endl;
		while (ptr!= NULL)
		{
			std::cout << "-------------\n" << std::endl;
			std::cout << ptr->name << std::endl;
			std::cout << ptr->favDrink << std::endl;
			std::cout << "-------------\n" << std::endl;
			ptr = ptr->next;
		}
	}
}