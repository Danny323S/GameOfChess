#pragma once
#include "RestrictedPiece.h"

class King : public RestrictedPiece {
private:
    void checkMove() override;

public:
    King(Color color);
};