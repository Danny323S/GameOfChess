#pragma once 
#include "Piece.h"
#include "Pawn.h"
#include "King.h"
#include "Rook.h"
#include "Queen.h"
#include "Bishop.h"
#include "Knight.h"

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