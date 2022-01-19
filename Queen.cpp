#include "Queen.h"

Queen::Queen(Color color) : Piece(color) {
    this->type = Type::TQueen;
}

void Queen::initializeMovePattern() {                                                   
    std::cout << "move Queen\n";
}
