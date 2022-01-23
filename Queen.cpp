#include "Queen.h"

Queen::Queen(Color color, Chessboard *chessboard) : Piece(color, chessboard) {
    this->type = Type::TQueen;
}

bool Queen::checkMove(Square *destination_square) {                                                   
    std::cout << "move Queen\n";
}
