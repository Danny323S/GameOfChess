#ifndef CHESSBOARD_H
#define CHESSBOARD_H
#include <vector>
#include "Piece.h"
#include "Rook.h"
#include "King.h"
#include "Knight.h"
#include "Queen.h"
#include "Pawn.h"
#include "Bishop.h"
#include "Square.h"

#define DIMENSION 8


class Chessboard {
private:
    Square chessboard[DIMENSION][DIMENSION];

    // std::vector<Piece*> pieces;
    // std::vector<Piece> white_set;
    // std::vector<Piece> black_set;
public: 
    Chessboard();
    Square* getSquareAt(int rank, int file);
    
    bool isRankClear(Square *from, Square *to);
    bool isFileClear(Square *from, Square *to);
    bool isDiagonalClear(Square *from, Square *to);

    void promote();
    void capture();
};

#endif