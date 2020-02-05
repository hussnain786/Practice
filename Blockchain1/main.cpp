#include "Block.h"
#include "Blockchain.h"
#include <iostream>

using namespace std;

int main()
{
	Blockchain AwesomeCoin;

	TransactionData data1;
	time_t dateTime;
	data1.amount = 1.5;
	data1.receiveKey = "Joe";
	data1.senderKey = "Sally";
	data1.timeStamp = time(&dateTime);

	AwesomeCoin.addBlock(data1);
	cout << "Is chain valid?" << endl << AwesomeCoin.isChainValid() << "\n";

	TransactionData data2;
	//time_t dateTime;
	data2.amount = 0.00013322;
	data2.receiveKey = "Hussnain";
	data2.senderKey = "Aftab";
	data2.timeStamp = time(&dateTime);

	AwesomeCoin.addBlock(data2);
	cout << "Is chain valid?" << endl << AwesomeCoin.isChainValid() << "\n";

	Block* hackBlock = AwesomeCoin.getLatestBlock();
	hackBlock->data.amount = 1000;
	hackBlock->data.receiveKey = "Hussnain";

	cout << "Now is the chain still valid??" << endl;
	cout << AwesomeCoin.isChainValid() << endl;
	return 0;
}