#include "Bishop.h"

Bishop::Bishop(Color color) : Piece(color) {
    this->type = Type::TBishop;
}

void Bishop::checkMove() {                                                   
    std::cout << "move Bishop\n";
}
