#include "Piece.h"

Piece::Piece(Color color, Chessboard *chessboard) {
    this->color = color;
    this->type = Type::TPiece;
    this->chessboard = chessboard;
}

Color Piece::getColor() {
    return this->color;
}

Type Piece::getType() {
    return this->type;
}

int Piece::getFile() {
    return this->file;
}

int Piece::getRank() {
    return this->rank;
}

Chessboard* Piece::getChessboard() {
    return this->chessboard;
}

void Piece::setPosition(int rank, int file) {
    this->file = file;
    this->rank = rank;
}

bool Piece::canBeCapturedEnPassant() {
    return false;
}