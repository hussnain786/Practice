#include "BlockChain.h"
#include <iostream>
#include "sha256.h"

using namespace std;

int main()
{
	BlockChain bChain;

	cout << "Mining block 1..." << endl;
	bChain.AddBlock(Block(1, "Block 1 Data"));

	cout << "Mining block 2..." << endl;
	bChain.AddBlock(Block(2, "Block 2 Data"));

	cout << "Mining block 3..." << endl;
	bChain.AddBlock(Block(3, "Block 3 Data"));

	string str = "Block 3 Data";

	string hash = sha256(str);

	cout << hash << endl;

	return 0;
}