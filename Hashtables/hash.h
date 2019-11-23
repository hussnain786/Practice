#pragma once

class hash
{
private:
	static const int tableSize = 10; //Allow to define the size of the table inside the class definition
	struct item
	{
		std::string name;
		std::string favDrink;
		item* next; //to use the linked list
	};

	item* HashTable[tableSize];
public:
	hash();
	int Hash(std::string key);
	void AddItem(std::string name, std::string drink);
	int numberOfItemsInIndex(int index);
	void printTable();
	void printItemsInIndex(int index);
};