#include "Bishop.h"

Bishop::Bishop(Color color) : Piece(color) {
    this->type = Type::TBishop;
}

void Bishop::initializeMovePattern() {                                                   
    std::cout << "move Bishop\n";
}
