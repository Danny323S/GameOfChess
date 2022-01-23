#ifndef KING_H
#define KING_H
#include "RestrictedPiece.h"

class King : public RestrictedPiece {
private:
    bool checkMove(Square *destination_square) override;

public:
    King(Color color, Chessboard *chessboard);
};
#endif