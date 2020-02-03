#include "BlockChain.h"

BlockChain::BlockChain() {
	_vChain.emplace_back(Block(0, "Genesis Block"));
	_nDifficulty = 4;
}

void BlockChain::AddBlock(Block bNew) {
	bNew.sPrevHash = _GetLastBlock().getHash();
	bNew.mineBlock(_nDifficulty);
	_vChain.push_back(bNew);
}

Block BlockChain::_GetLastBlock() const {
	return _vChain.back();
}