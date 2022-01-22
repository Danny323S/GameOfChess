#include "Chessboard.h" 

Chessboard::Chessboard() {
    //utworzenie 
    for (int x = 0; x < DIMENSION; x++) {
        for (int y = 0; y < DIMENSION; y++) {
            chessboard[x][y] = Square(x, y);
        }
    }
    
//BLACK SET   
    chessboard[0][7].setOccupant(new Rook(black));
    chessboard[1][7].setOccupant(new Knight(black));
    chessboard[2][7].setOccupant(new Bishop(black));
    chessboard[3][7].setOccupant(new Queen(black));
    chessboard[4][7].setOccupant(new King(black));
    chessboard[5][7].setOccupant(new Bishop(black));
    chessboard[6][7].setOccupant(new Knight(black));
    chessboard[7][7].setOccupant(new Rook(black));

    chessboard[0][6].setOccupant(new Pawn(black));
    chessboard[1][6].setOccupant(new Pawn(black));
    chessboard[2][6].setOccupant(new Pawn(black));
    chessboard[3][6].setOccupant(new Pawn(black));
    chessboard[4][6].setOccupant(new Pawn(black));
    chessboard[5][6].setOccupant(new Pawn(black));
    chessboard[6][6].setOccupant(new Pawn(black));
    chessboard[7][6].setOccupant(new Pawn(black));

//WHITE SET
    chessboard[0][0].setOccupant(new Rook(white));
    chessboard[1][0].setOccupant(new Knight(white));
    chessboard[2][0].setOccupant(new Bishop(white));
    chessboard[3][0].setOccupant(new Queen(white));
    chessboard[4][0].setOccupant(new King(white));
    chessboard[5][0].setOccupant(new Bishop(white));
    chessboard[6][0].setOccupant(new Knight(white));
    chessboard[7][0].setOccupant(new Rook(white));

    chessboard[0][1].setOccupant(new Pawn(white));
    chessboard[1][1].setOccupant(new Pawn(white));
    chessboard[2][1].setOccupant(new Pawn(white));
    chessboard[3][1].setOccupant(new Pawn(white));
    chessboard[4][1].setOccupant(new Pawn(white));
    chessboard[5][1].setOccupant(new Pawn(white));
    chessboard[6][1].setOccupant(new Pawn(white));
    chessboard[7][1].setOccupant(new Pawn(white));
}

bool Chessboard::isRankClear(Square &from, Square &to) {
    if(from.getRank() < to.getRank()){
        for (int i = from.getRank(); i <= to.getRank(); i++) {
            if (chessboard[i][from.getFile()].isOccupied()) {
                return false;
            }
        }
    } else if (from.getRank() > to.getRank()) {
        for (int i = from.getRank(); i >= to.getRank(); i--) {
            if (chessboard[i][from.getFile()].isOccupied()) {
                return false;
            }
        }
    } else {
        if (chessboard[from.getRank()][from.getFile()].isOccupied()) {
            return false;
        }
    }

    return true;
}

Square* Chessboard::getSquareAt(int file , int rank) {
    return &chessboard[file][rank];
}

