#include "Block.h"
#include "sha256.h"
#include <sstream>
#include <time.h>

Block::Block(uint32_t nIndexIn, const string& sDataIn) : _nIndexIn(nIndexIn), _sData(sDataIn) {
	_nNonce = -1;
	_tTime = time(nullptr);
}

string Block::getHash() {
	return _sHash;
}

void Block::mineBlock(uint32_t nDifficulty) {
	char cstr[5];
	for (uint32_t i = 0; i < nDifficulty; i++) {
		cstr[i] = '0';
	}
	cstr[nDifficulty] = '\0';

	string str(cstr);

	do {
		_nNonce++;
		_sHash = _CalculateHash();
	} while (_sHash.substr(0, nDifficulty) != str);

	cout << "Block mined:" << _sHash << endl;
}

inline string Block::_CalculateHash() const {
	stringstream ss;

	ss << _nIndexIn << _tTime << _sData << _nNonce << sPrevHash;

	return sha256(ss.str());
}