#include "Chessboard.h" 

Chessboard::Chessboard() {
    //utworzenie 
    for (int x = 0; x < DIMENSION; x++) {
        for (int y = 0; y < DIMENSION; y++) {
            chessboard[x][y] = Square(x, y);
        }
    }

//BLACK SET   
    chessboard[0][7].setOccupant(new Rook(black, this));
    chessboard[1][7].setOccupant(new Knight(black, this));
    chessboard[2][7].setOccupant(new Bishop(black, this));
    chessboard[3][7].setOccupant(new Queen(black, this));
    chessboard[4][7].setOccupant(new King(black, this));
    chessboard[5][7].setOccupant(new Bishop(black, this));
    chessboard[6][7].setOccupant(new Knight(black, this));
    chessboard[7][7].setOccupant(new Rook(black, this));

    chessboard[0][6].setOccupant(new Pawn(black, this));
    chessboard[1][6].setOccupant(new Pawn(black, this));
    chessboard[2][6].setOccupant(new Pawn(black, this));
    chessboard[3][6].setOccupant(new Pawn(black, this));
    chessboard[4][6].setOccupant(new Pawn(black, this));
    chessboard[5][6].setOccupant(new Pawn(black, this));
    chessboard[6][6].setOccupant(new Pawn(black, this));
    chessboard[7][6].setOccupant(new Pawn(black, this));

//WHITE SET
    chessboard[0][0].setOccupant(new Rook(white, this));
    chessboard[1][0].setOccupant(new Knight(white, this));
    chessboard[2][0].setOccupant(new Bishop(white, this));
    chessboard[3][0].setOccupant(new Queen(white, this));
    chessboard[4][0].setOccupant(new King(white, this));
    chessboard[5][0].setOccupant(new Bishop(white, this));
    chessboard[6][0].setOccupant(new Knight(white, this));
    chessboard[7][0].setOccupant(new Rook(white, this));

    chessboard[0][1].setOccupant(new Pawn(white, this));
    chessboard[1][1].setOccupant(new Pawn(white, this));
    chessboard[2][1].setOccupant(new Pawn(white, this));
    chessboard[3][1].setOccupant(new Pawn(white, this));
    chessboard[4][1].setOccupant(new Pawn(white, this));
    chessboard[5][1].setOccupant(new Pawn(white, this));
    chessboard[6][1].setOccupant(new Pawn(white, this));
    chessboard[7][1].setOccupant(new Pawn(white, this));
}

Square* Chessboard::getSquareAt(int file , int rank) {
    // if (((0 <= file) && (file <= 7)) && ((0 <= rank) && (rank <= 7)) == false) {
    //     return nullptr;
    // }

    return &chessboard[file][rank];
}

bool isRankClear(int rakn, int from_file, int to_file) {
    // if(from->getRank() < to->getRank()){
    //     for (int i = from->getRank(); i <= to->getRank(); i++) {
    //         if (chessboard[i][from->getFile()].isOccupied()) {
    //             return false;
    //         }
    //     }
    // } else if (from->getRank() > to->getRank()) {
    //     for (int i = from->getRank(); i >= to->getRank(); i--) {
    //         if (chessboard[i][from->getFile()].isOccupied()) {
    //             return false;
    //         }
    //     }
    // } else {
    //     if (chessboard[from->getRank()][from->getFile()].isOccupied()) {
    //         return false;
    //     }
    // }

    return true;
}

bool Chessboard::isFileClear(int file, int from_rank, int to_rank) {
    return false;
}

bool Chessboard::isDiagonalClear(int from_file, int to_file, int from_rank, int to_rank) {
    return false;
}






