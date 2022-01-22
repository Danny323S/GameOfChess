#pragma once
#include "Piece.h"

class Queen : public Piece {
private:
    void checkMove() override;

public:
    Queen(Color color);
};