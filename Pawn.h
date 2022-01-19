#pragma once
#include "RestrictedPiece.h"

class Pawn : public RestrictedPiece {
private:
    bool en_passant;
    void initializeMovePattern() override;

public:
    Pawn(Color color);
};