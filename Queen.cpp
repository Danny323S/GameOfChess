#include "Queen.h"

Queen::Queen(Color color, Chessboard *chessboard) : Piece(color, chessboard) {
    this->type = Type::TQueen;
}

bool Queen::checkMove(int de_file, int de_rank, Piece *piece_to_capture) {                                                   
    std::cout << "de_file: " << de_file << ", " << "de_rank: " << de_rank << std::endl;
    return false;
}

