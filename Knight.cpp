#include "Knight.h"

Knight::Knight(Color color, Chessboard *chessboard) : Piece(color, chessboard) {
    this->type = Type::TKnight;
}

bool Knight::checkMove(int de_file, int de_rank, Piece *piece_to_capture) {

    return false;
}