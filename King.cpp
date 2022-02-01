#include "King.h"

King::King(Color color, Chessboard *chessboard) : RestrictedPiece(color, chessboard) {
    this->type = Type::TKing;
}

bool King::checkMove(int de_file, int de_rank, Piece *piece_to_capture) {                                                   
    //Możliwe ruchy
    //-1 <= act_f - de_f <= 1
    //-1 <= act_r - de_t <= 1
    //Roszada
    //(+-2,0) -> jeżeli pierwszy ruch i wierza znajduje się w rodu rakże nie ruszana

    if ((-1 <= this->getFile() - de_file <= 1) && (-1 <= this->getRank() - de_rank <= 1)) {
        if(!getChessboard()->getSquareAt(de_file, de_rank)->isOccupied()) {
            return true;
        } 
    } else if (!this->wasItMoved()) {
        if (this->getFile() - de_file == 2 && this->getFile() == de_rank && getChessboard()->isRankClear(0, 1, 3)) {
            //sprawdzenie czy w lewym rogu jest wierza która nie była jeszcze poruszana
            if (!getChessboard()->getSquareAt(0, this->getRank())->getOccupant()->wasItMoved()) {
                return true;
            }
        } else if (this->getFile() - de_file == -2 && this->getFile() == de_rank && getChessboard()->isRankClear(0, 5, 6)) {
            if (getChessboard()->getSquareAt(7, this->getRank())) {
                if (!getChessboard()->getSquareAt(0, this->getRank())->getOccupant()->wasItMoved()) {
                    return true;
                }
            }
        } 
    }

    return false;
}

