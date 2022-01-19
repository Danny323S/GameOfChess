#pragma once
#include "Piece.h"

class Knight : public Piece {
private:
    void initializeMovePattern() override;

public:
    Knight(Color color);
};