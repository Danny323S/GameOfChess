#pragma once
#include "RestrictedPiece.h"

class King : public RestrictedPiece {
private:
    void initializeMovePattern() override;

public:
    King(Color color);
};