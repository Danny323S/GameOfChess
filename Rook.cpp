#include "Rook.h"

Rook::Rook(Color color, Chessboard *chessboard) : RestrictedPiece(color, chessboard) {
    this->type = Type::TRook;
}

bool Rook::checkMove(int de_file, int de_rank, Piece *piece_to_capture) {                                                   
    std::cout << "de_file: " << de_file << ", " << "de_rank: " << de_rank << std::endl;
    return false;
}
