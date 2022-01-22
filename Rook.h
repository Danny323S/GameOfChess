#pragma once
#include "RestrictedPiece.h"

class Rook : public RestrictedPiece {
private:
    void checkMove() override;

public:
    Rook(Color color);
};