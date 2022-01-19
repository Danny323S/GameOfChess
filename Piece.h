#pragma once
#include <bits/stdc++.h>
#include <typeinfo>
#include "Color.h"


enum Type {TPiece, TPawn, TKing, TQueen, TRook, TBishop, TKnight};

class Piece {
protected:
    Type type;
    Color color;
    std::vector<std::pair <int, int>> move_pattern;

    Piece(Color color);
    virtual void initializeMovePattern() = 0;  

public:
    Color getColor(); 
    Type getType();
    bool checkWithMovePattern(int actual_file, int actual_rank, int destination_file, int destination_rank);
};