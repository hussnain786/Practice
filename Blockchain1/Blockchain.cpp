#include "Blockchain.h"

Block Blockchain::createGenesisBlock()
{
	time_t current;
	TransactionData d;
	d.amount = 0;
	d.receiveKey = "None";
	d.senderKey = "None";
	d.timeStamp = time(&current);

	hash<int> hash1;
	Block genesis(0, d, hash1(0));
	return genesis;
}

Blockchain::Blockchain()
{
	Block genesis = createGenesisBlock();
	chain.push_back(genesis);
}

//Only for demo
Block* Blockchain::getLatestBlock()
{
	return &chain.back();
}

void Blockchain::addBlock(TransactionData d)
{
	int index = (int)chain.size() - 1;
	Block newBlock(index, d, getLatestBlock()->getHash());
}

bool Blockchain::isChainValid()
{
	vector<Block>::iterator i;
	int chainLen = (int)chain.size();
	for (i = chain.begin(); i != chain.end(); ++i)
	{
		Block currentBlock = *i;
		if (!currentBlock.isHashValid())
		{
			//Invalid
			return false;
		}
		if (chainLen > 1)
		{
			Block previousBlock = *(i - 1);
			if (currentBlock.getPrevHash() != previousBlock.getHash())
			{
				//Invalid
				return false;
			}

		}
	}
	return true;
}