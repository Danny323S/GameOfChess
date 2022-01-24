#ifndef PIECE_H
#define PIECE_H
#include <bits/stdc++.h>
#include <typeinfo>
#include "Color.h"
// #include "Chessboard.h"
class Chessboard;


enum Type {TPiece, TPawn, TKing, TQueen, TRook, TBishop, TKnight};

class Piece {
private:
    int file;
    int rank;

    Color color;
    Chessboard *chessboard; 

protected:
    Type type;

public:
    Piece(Color color, Chessboard *chessboard);

    Color getColor(); 
    Type getType();
    int getFile();
    int getRank();
    
    void setPosition(int file, int rank);

    Chessboard* getChessboard();                       
    virtual bool checkMove(int de_file, int de_rank) = 0; //destination file, rank
    virtual bool canBeCapturedEnPassant();
};

#endif