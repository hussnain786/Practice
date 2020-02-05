#pragma once
#include "Block.h"

class Blockchain
{
private:
	Block createGenesisBlock();
public:
	//Public Chain
	vector<Block> chain;

	//Constructor
	Blockchain();

	//Public functions
	void addBlock(TransactionData data);
	bool isChainValid();

	Block* getLatestBlock();
};