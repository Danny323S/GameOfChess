#include "Rook.h"

Rook::Rook(Color color) : RestrictedPiece(color) {
    this->type = Type::TRook;
}

void Rook::initializeMovePattern() {                                                   
    std::cout << "move Rook\n";
}