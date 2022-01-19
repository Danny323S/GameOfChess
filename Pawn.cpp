#include "Pawn.h"

Pawn::Pawn(Color color) : RestrictedPiece(color) {
    this->type = Type::TPawn;
    initializeMovePattern();
}

void Pawn::initializeMovePattern() {                                  
    // Schemat ruchów: - pozycje względne
    //  dla białego piona: (0, +1); (-1, +1), (+1, +1), (0, +2).
    //  dla czarnego piona: (0, -1); (-1, -1), (+1, -1), (0, -2).
    if(this->color == white) {
        move_pattern.push_back(std::make_pair(0,2)); // bierka nie była jeszcze poruszona - pierwszy ruch, pole jest puste, nic nie znajduje się na drodze, 
        move_pattern.push_back(std::make_pair(-1,1)); // na tej pozycji znajduje się bierka przeciwnego koloru / bicie
        move_pattern.push_back(std::make_pair(0,1)); // pole jest puste.
        move_pattern.push_back(std::make_pair(1,1)); // na tej pozycji znajduje się bierka przeciwnego koloru / bicie
    } else {
        move_pattern.push_back(std::make_pair(0,-2));
        move_pattern.push_back(std::make_pair(-1,-1));
        move_pattern.push_back(std::make_pair(0,-1));
        move_pattern.push_back(std::make_pair(1,-1));
    }
}