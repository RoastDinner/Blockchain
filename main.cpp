#include "Blockchain.h"
#include <iostream>
using namespace std;

int main() {

    Blockchain bChain = Blockchain();
    cout << "Mining Block 1... \n";
    bChain.AddBlock(Block(1, "Block 1 Data"));

    cout << "Mining Block 2... \n";
    bChain.AddBlock(Block(2, "Block 2 Data"));


    cout << "Mining Block 3... \n";
    bChain.AddBlock(Block(3, "Block 2 Data"));

    return 0;






}