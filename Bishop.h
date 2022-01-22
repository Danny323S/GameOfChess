#pragma once
#include "Piece.h"

class Bishop : public Piece {
private:
    void checkMove() override;

public:
    Bishop(Color color);
};