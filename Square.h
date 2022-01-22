#pragma once 
#include "Piece.h"
#include "Rook.h"
#include "King.h"
#include "Bishop.h"
#include "Queen.h"
#include "Knight.h"
#include "Pawn.h"

class Square {
private:
    int file;
    int rank;
    Piece *occupant;

public:
    Square() = default;
    Square(int file, int rank);

    int getFile();
    int getRank();

    bool isOccupied();
    void setOccupant(Piece *occupant);
    Piece* getOccupant();
};