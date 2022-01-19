#include "Square.h"
Square::Square(int file, int rank) {
    this->rank = rank;
    this->file = file;
    occupant = NULL;
}

int Square::getRank() {
    return this->rank;
}

int Square::getFile() {
    return this->file;
}

bool Square::isOccupied() {
    if (occupant == NULL) {
        return false;
    } else {
        return true;
    }
}

void Square::setOccupant(Piece* occupant) {
    this->occupant = occupant;
}

Piece* Square::getOccupant () {
    return this->occupant;
}