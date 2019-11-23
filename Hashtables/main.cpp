#include <iostream>

#include"hash.h"

//using namespace std;

int main()
{
	hash Hashy;
	Hashy.AddItem("Hussnain", "Coke");
	Hashy.AddItem("Aftab", "Diet Coke");
	Hashy.AddItem("Emma", "Tea");
	Hashy.AddItem("Dan", "Mocha");
	Hashy.AddItem("Zeri", "Coke");
	Hashy.AddItem("Hassan", "Hot chocoloate");
	Hashy.AddItem("Mum", "Coffee");
	Hashy.AddItem("Milad", "Pepsi");
	Hashy.AddItem("Tayyab", "Latte");
	Hashy.AddItem("Ben", "Fanta");
	
	Hashy.printTable();
	Hashy.printItemsInIndex(8);
	return 0;
}