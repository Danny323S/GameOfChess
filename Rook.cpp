#include "Rook.h"

Rook::Rook(Color color, Chessboard &chessboard) : RestrictedPiece(color, chessboard) {
    this->type = Type::TRook;
}

bool Rook::checkMove(Square *destination_square) {                                                   
    std::cout << "move Rook\n";
}