#include "Blockchain.h"

Blockchain::Blockchain() {

    _vChain.emplace_back(Block(0, "Genisis Block"));
    _nDifficulty = 6;
}

void Blockchain::AddBlock(Block bNew) {

    bNew.sPrevHash = _GetLastBlock().GetHash();
    bNew.MineBlock(_nDifficulty);
    _vChain.push_back(bNew);




}