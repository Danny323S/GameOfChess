#pragma once
#include "RestrictedPiece.h"

class Rook : public RestrictedPiece {
private:
    void initializeMovePattern() override;

public:
    Rook(Color color);
};