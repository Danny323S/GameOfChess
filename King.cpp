#include "King.h"

King::King(Color color, Chessboard *chessboard) : RestrictedPiece(color, chessboard) {
    this->type = Type::TKing;
}

bool King::checkMove(Square *destination_square)  {                                                   
    destination_square->getRank();                     
    return false;
}
