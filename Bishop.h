#ifndef BISHOP_H
#define BISHOP_H
#include "Piece.h"

class Bishop : public Piece {
private:
    bool checkMove(Square *destination_square) override;

public:
    Bishop(Color color, Chessboard *chessboard);
};

#endif