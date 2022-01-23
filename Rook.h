#ifndef ROOK_H
#define ROOK_H
#include "RestrictedPiece.h"

class Rook : public RestrictedPiece {
private:
    bool checkMove(Square *destination_square) override;

public:
    Rook(Color color, Chessboard *chessboard);
};

#endif