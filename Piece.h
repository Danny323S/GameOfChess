#pragma once
#include <bits/stdc++.h>
#include <typeinfo>
#include "Color.h"
// #include "ChessBoard.h"
// #include "Square.h"

class Square;// forward-declaration
class Chessboard;// forward-declaration

enum Type {TPiece, TPawn, TKing, TQueen, TRook, TBishop, TKnight};

class Piece {
private:
    Color color;
    Square *position;
    Chessboard *chessboard; 

protected:
    Type type;

public:
    Piece(Color color, Chessboard &chessboard);

    Color getColor(); 
    Type getType();
    Square* getPosition();
    Chessboard* getChessboard();

    virtual bool checkMove(Square *destination_square) = 0;  
    virtual bool canBeCapturedEnPassant();
    void setPosition(Square *position);
};