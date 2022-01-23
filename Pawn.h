#ifndef PAWN_H
#define PAWN_H
#include "RestrictedPiece.h"

class Pawn : public RestrictedPiece {
private:
    bool en_passant_move;
    bool canBeCapturedEnPassant() override;
    bool checkMove(Square *destination_square) override;

public:
    Pawn(Color color, Chessboard *chessboard);
}; 

#endif