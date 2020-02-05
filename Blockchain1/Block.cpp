#include "Block.h"
#include <string>

Block::Block(int idx, TransactionData d, size_t prevHash)
{
	index = idx;
	data = d;
	previousHash = prevHash;
	blockHash = generateHash();
}

//private function
size_t Block::generateHash()
{
	hash<string> hash1;
	hash<size_t> hash2;
	hash<size_t> hash3;
	string toHash = to_string(data.amount) + data.receiveKey + data.senderKey + to_string(data.timeStamp);

	return hash3(hash1(toHash) + hash2(previousHash));
}

//public functions
size_t Block::getHash()
{
	return blockHash;
}

size_t Block::getPrevHash()
{
	return previousHash;
}

bool Block::isHashValid()
{
	return generateHash() == blockHash;
}