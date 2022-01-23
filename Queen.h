#ifndef QUEEN_H
#define QUEEN_H
#include "Piece.h"

class Queen : public Piece {
private:
    bool checkMove(Square *destination_square) override;

public:
    Queen(Color color, Chessboard *chessboard);
};

#endif