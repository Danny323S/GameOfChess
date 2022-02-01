#ifndef KING_H
#define KING_H
#include "RestrictedPiece.h"
#include "Chessboard.h"

class King : public RestrictedPiece {
private:
    bool checkMove(int de_file, int de_rank, Piece *piece_to_capture) override;

public:
    King(Color color, Chessboard *chessboard);
};
#endif