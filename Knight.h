#pragma once
#include "Piece.h"

class Knight : public Piece {
private:
    bool checkMove(Square *destination_square) override;

public:
    Knight(Color color, Chessboard &chessboard);
};