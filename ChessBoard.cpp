#include "ChessBoard.h" 

ChessBoard::ChessBoard() {
    //utworzenie 
    for (int x = 0; x < DIMENSION; x++) {
        for (int y = 0; y < DIMENSION; y++) {
            board[x][y] = Square(x, y);
        }
    }
    
//BLACK SET   
    board[0][7].setOccupant(new Rook(black));
    board[1][7].setOccupant(new Knight(black));
    board[2][7].setOccupant(new Bishop(black));
    board[3][7].setOccupant(new Queen(black));
    board[4][7].setOccupant(new King(black));
    board[5][7].setOccupant(new Bishop(black));
    board[6][7].setOccupant(new Knight(black));
    board[7][7].setOccupant(new Rook(black));

    board[0][6].setOccupant(new Pawn(black));
    board[1][6].setOccupant(new Pawn(black));
    board[2][6].setOccupant(new Pawn(black));
    board[3][6].setOccupant(new Pawn(black));
    board[4][6].setOccupant(new Pawn(black));
    board[5][6].setOccupant(new Pawn(black));
    board[6][6].setOccupant(new Pawn(black));
    board[7][6].setOccupant(new Pawn(black));

//WHITE SET
    board[0][0].setOccupant(new Rook(white));
    board[1][0].setOccupant(new Knight(white));
    board[2][0].setOccupant(new Bishop(white));
    board[3][0].setOccupant(new Queen(white));
    board[4][0].setOccupant(new King(white));
    board[5][0].setOccupant(new Bishop(white));
    board[6][0].setOccupant(new Knight(white));
    board[7][0].setOccupant(new Rook(white));

    board[0][1].setOccupant(new Pawn(white));
    board[1][1].setOccupant(new Pawn(white));
    board[2][1].setOccupant(new Pawn(white));
    board[3][1].setOccupant(new Pawn(white));
    board[4][1].setOccupant(new Pawn(white));
    board[5][1].setOccupant(new Pawn(white));
    board[6][1].setOccupant(new Pawn(white));
    board[7][1].setOccupant(new Pawn(white));
}

bool ChessBoard::isRankClear(Square &from, Square &to) {
    if(from.getRank() < to.getRank()){
        for (int i = from.getRank(); i <= to.getRank(); i++) {
            if (board[i][from.getFile()].isOccupied()) {
                return false;
            }
        }
    } else if (from.getRank() > to.getRank()) {
        for (int i = from.getRank(); i >= to.getRank(); i--) {
            if (board[i][from.getFile()].isOccupied()) {
                return false;
            }
        }
    } else {
        if (board[from.getRank()][from.getFile()].isOccupied()) {
            return false;
        }
    }

    return true;
}

Square* ChessBoard::getSquareAt(int file , int rank) {
    return &board[file][rank];
}

