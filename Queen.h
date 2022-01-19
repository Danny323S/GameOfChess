#pragma once
#include "Piece.h"

class Queen : public Piece {
private:
    void initializeMovePattern() override;

public:
    Queen(Color color);
};