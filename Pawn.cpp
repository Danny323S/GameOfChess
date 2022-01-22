#include "Pawn.h"

Pawn::Pawn(Color color, Chessboard &chessboard) : RestrictedPiece(color, chessboard) {
    this->type = Type::TPawn;
}

//Jak sprawdzić czy bierka była poruszona więcej niż jeden raz lub 2 razy 

bool Pawn::canBeCapturedEnPassant() {
    if ((this->getColor() == white && this->getPosition()->getRank() == 3) || (this->getColor() == black && this->getPosition()->getRank() == 4)) {
        if (this->en_passant_move == true ) {
            return true;
        }
    }
    return false;
}

bool Pawn::checkMove(Square *destination_square) {
//Możliwe ruchy 
//BIAŁY PION (0,1) - ruch podstawowy. możliwy jeżeli na polu nie stoi żaden inny pionek 
//           (0,2) - ruch specjalny, możliwy jeżeli bierka nie była wcześniej ruszona (wasItMoved == false), jeżeli pole po drodze jest puste i to pole także, 
//           (1,1) - bicie, na polu musi znajdować się bierka przeciwnego koloru, lub bicie w przelocie
//           (-1,1) - bicie, na polu musi znajdować się bierka przeciwnego koloru, lub bicie w przelocie
//CZARNY PION (0,-1) 
//           (0,-2) 
//           (1,-1)
//           (-1,-1)
    int y_direction = 1;

    if (this->getColor() == white) {
        y_direction = 1;
    } else {
        y_direction = -1;
    }

    // ruch o jeden w przód 
    if (destination_square->getFile() == this->getPosition()->getFile() && destination_square->getRank() == this->getPosition()->getRank() + 1*y_direction) {
        if (!destination_square->isOccupied())
            return true;
    } else if (destination_square->getFile() == this->getPosition()->getFile() && destination_square->getRank() == this->getPosition()->getRank() + 2*y_direction) {
        //sprwdzenie czy pionek był ruszany 
        //sprawdzenie czy na drodze nie stoi żadna inna bierka
        //sprawdzenei czy pole "destination" nie jest zajmowane przez inny pionek

        //jeżeli bierka zostanie poruszona:
        //1.en_passant_move == true 
        //2.zmiana wasMove == true
        if(!this->wasItMoved()) {
            if(getChessboard()->isFileClear(this->getPosition(), destination_square) == true && destination_square->isOccupied() == false) {
                return true;
            }

            this->en_passant_move = true;
            this->hasMoved();
        }
    } else if (/*Biciei*/) {

    }
}

