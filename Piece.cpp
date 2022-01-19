#include "Piece.h"

Piece::Piece(Color color) {
    this->color = color;
    this->type = Type::TPiece;
}

Color Piece::getColor() {
    return this->color;
}

Type Piece::getType() {
    return this->type;
}

bool Piece::checkWithMovePattern(int actual_file, int actual_rank, int destination_file, int destination_rank) {
    bool possible_move = false;

    for (int i = 0; i < int(move_pattern.size()); i++) {
        if(destination_file - actual_file == move_pattern[i].first &&  destination_rank - actual_rank == move_pattern[i].second) {
            possible_move = true;
            return possible_move;
        }
    }

    return possible_move;
}