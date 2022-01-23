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

Square* Piece::getPosition() {
    return this->position;
}

Chessboard* Piece::getChessboard() {
    return this->chessboard;
}

void Piece::setPosition(Square *position) {
    this->position = position;
}

bool Piece::canBeCapturedEnPassant() {
    return false;
}