#include "Square.h"

Square::Square(int file, int rank) {
    this->rank = rank;
    this->file = file;
    occupant = nullptr;
}

int Square::getRank() {
    return this->rank;
}

int Square::getFile() {
    return this->file;
}

bool Square::isOccupied() {
    if (occupant == nullptr) {
        return false;
    } else {
        return true;
    }
}

void Square::setOccupant(Piece* occupant) {
    this->occupant = occupant;
    occupant->setPosition(this->file, this->rank);
}

Piece* Square::getOccupant () {
    return this->occupant;
}