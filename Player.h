#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <vector>
#include "Chessboard.h"
#include "Piece.h"
#include "Color.h"


class Player {
private:
    std::string name;
    Color color;

    Chessboard* chessboard;
    Piece* selected_piece;

    // std::vector<Piece*> pieces_set;
    // King* king;

public:
    Player(Color color, Chessboard &chessboard);
    void selectPiece(int file, int rank); //select piece at selected Square
    Piece* getSelectedPiece();
    bool movePiece(int file, int rank); //move selected piece at selected square;
    Color getColor();
};

#endif