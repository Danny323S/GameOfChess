#pragma once
#include "Piece.h"

class RestrictedPiece : public Piece {
private:
    bool moved;

protected:
    RestrictedPiece(Color color);

public:
    bool wasMoved();
};