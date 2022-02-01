#ifndef KNIGHT_H
#define KNIGHT_H
#include "Piece.h"
#include "Chessboard.h"

class Knight : public Piece {
private:
    bool checkMove(int de_file, int de_rank, Piece *piece_to_capture) override;

public:
    Knight(Color color, Chessboard *chessboard);
};

#endif