#include "Rook.h"

Rook::Rook(Color color) : RestrictedPiece(color) {
    this->type = Type::TRook;
}

void Rook::checkMove() {                                                   
    std::cout << "move Rook\n";
}