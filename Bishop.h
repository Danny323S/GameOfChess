#pragma once
#include "Piece.h"

class Bishop : public Piece {
private:
    void initializeMovePattern() override;

public:
    Bishop(Color color);
};