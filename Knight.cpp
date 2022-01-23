#include "Knight.h"

Knight::Knight(Color color, Chessboard *chessboard) : Piece(color, chessboard) {
    this->type = Type::TKnight;
}

bool Knight::checkMove(Square *destination_square) {                                                   
    std::cout << "move Knight\n";
}