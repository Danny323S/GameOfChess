#pragma once
#include "Piece.h"

class Queen : public Piece {
private:
    bool Queen::checkMove(Square *destination_square) override;

public:
    Queen(Color color, Chessboard &chessboard);
};