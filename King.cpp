#include "King.h"

King::King(Color color, Chessboard *chessboard) : RestrictedPiece(color, chessboard) {
    this->type = Type::TKing;
}

bool King::checkMove(Square *destination_square)  {                                                   
    std::cout << "move King\n";
}
