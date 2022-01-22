#pragma once
#include <string>
#include <typeinfo>
#include <iostream>
#include <windows.h>
#include "ChessBoard.h"

class DisplayManager {
private:
    Chessboard *chessboard;

    void printDivider();
    void printEvenFile();
    void printOddFile();

    void printPiece(int x, int y);
    void printSquare(int x, int y);
    
public:
    DisplayManager(Chessboard &chessboard);
    void render();
};