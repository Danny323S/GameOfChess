#pragma once
#include "Piece.h"

class Knight : public Piece {
private:
    void checkMove() override;

public:
    Knight(Color color);
};