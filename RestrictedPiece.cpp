#include "RestrictedPiece.h"

RestrictedPiece::RestrictedPiece(Color color) : Piece(color) {
    this->moved = false; 
}

bool RestrictedPiece::wasMoved() {
    return moved;
}