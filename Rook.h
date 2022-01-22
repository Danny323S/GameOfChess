#pragma once
#include "RestrictedPiece.h"

class Rook : public RestrictedPiece {
private:
    bool Rook::checkMove(Square *destination_square) override;

public:
    Rook(Color color, Chessboard &chessboard);
};