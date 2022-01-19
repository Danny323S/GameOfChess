#pragma once
#include <string>
#include <typeinfo>
#include <iostream>
#include <windows.h>
#include "ChessBoard.h"

class DisplayManager {
private:
    ChessBoard *chessboard;

    void printDivider();
    void printEvenFile();
    void printOddFile();

    void printPiece(int x, int y);
    void printSquare(int x, int y);
    
public:
    DisplayManager(ChessBoard &chessboard);
    void render();
};