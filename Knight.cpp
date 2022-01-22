#include "Knight.h"

Knight::Knight(Color color) : Piece(color) {
    this->type = Type::TKnight;
}

void Knight::checkMove() {                                                   
    std::cout << "move Knight\n";
}
