#include "King.h"

King::King(Color color) : RestrictedPiece(color) {
    this->type = Type::TKing;
}

void King::checkMove() {                                                   
    std::cout << "move King\n";
}
