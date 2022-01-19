#pragma once
#include "Square.h"
#include <vector>

#define DIMENSION 8

class ChessBoard {
    
private:
    Square board[DIMENSION][DIMENSION];
    
    // std::vector<Piece*> pieces;
    // std::vector<Piece> white_set;
    // std::vector<Piece> black_set;

    bool isRankClear(Square &from, Square &to);
    bool isFileClear(Square &from, Square &to);
    bool isDiagonalClear(Square &from, Square &to);

public: 
    ChessBoard();
    Square* getSquareAt(int rank, int file);
    
    // bool move(Piece *piece_to_move, Square* piece_position, int destination_file, int destination_rank);

    void promote();
    void capture();
};