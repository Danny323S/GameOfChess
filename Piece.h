#pragma once
#include <bits/stdc++.h>
#include <typeinfo>
#include "Color.h"
#include "ChessBoard.h"


enum Type {TPiece, TPawn, TKing, TQueen, TRook, TBishop, TKnight};

class Piece {
private:
    Color color;
    Square *position;
    Chessboard *chessboard; 

protected:
    Type type;
    virtual bool checkMove(Square *destination_square) = 0;  
    virtual bool canBeCapturedEnPassant();

public:
    Piece(Color color, Chessboard &chessboard);

    Color getColor(); 
    Type getType();
    Square* getPosition();
    Chessboard* getChessboard();

    void setPosition(Square *position);
};