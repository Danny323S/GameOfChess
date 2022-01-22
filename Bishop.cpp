#include "Bishop.h"

Bishop::Bishop(Color color, Chessboard &chessboard) : Piece(color, chessboard) {
    this->type = Type::TBishop;
}

bool Bishop::checkMove(Square *destination_square) {                                                   
    std::cout << "move Bishop\n";
}
