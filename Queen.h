#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"

class Queen : public Piece {
private:
    bool checkMove(int de_file, int de_rank, Piece *piece_to_capture) override;

public:
    Queen(Color color, Chessboard *chessboard);
};

#endif