#pragma once
#include <vector>
#include <ctime>
#include <iostream>

using namespace std;

struct TransactionData
{
	double amount;
	string senderKey;
	string receiveKey;
	time_t timeStamp;
};

class Block
{
private:
	int index;
	size_t blockHash;
	size_t previousHash;
	size_t generateHash();

public:
	//Constructor
	Block(int idx, TransactionData d, size_t prevHash);

	//Get Original Hash
	size_t getHash();
	
	//Get Prev Hash
	size_t getPrevHash();

	//Transaction data
	TransactionData data;

	//Validate the Hash
	bool isHashValid();

};