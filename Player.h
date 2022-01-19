#pragma once
#include <string>
#include <vector>
#include "ChessBoard.h"
#include "Piece.h"
#include "Color.h"

class Player {
private:
    Color color;
    std::string name;
    std::vector<Piece*> pieces_set;
    
    ChessBoard* board;
    Piece* selected_piece;
    Square* selected_piece_position;
    King* king;

public:

    Piece* getSelectedPiece();

    Player(Color color, ChessBoard &board);
    void selectPiece(int file, int rank); //select piece at selected Square
    bool movePiece(int file, int rank); //move selected piece at selected square; 
};