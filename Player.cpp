#include "Player.h"

Piece* Player::getSelectedPiece() {
    return selected_piece;
}


Player::Player(Color color, Chessboard &board) {
    // z konsoli pobierana jest nazwa użytkownika, i przypisywana jest graczowi
    // przypisywany jest wektor bierek gracza
    // przypisywany jest wskaźnik na króla

    this->board = &board;
    this->color = color;
    this->selected_piece = NULL; 
}

void Player::selectPiece(int file, int rank) {
    //do klasy ChessBoard wysyłane jest zapytanie czy pionek na polu (rank, file)
    //może zostać wybrany przez gracza
    //jeżeli na wskazanym polu znajduje się pionek i jest on koloru gracza
    //bierka jest wybierana.
    // board->getSquareAt(rank, file)

    if(board->getSquareAt(file, rank)->isOccupied() && board->getSquareAt(file, rank)->getOccupant()->getColor() == this->color) {
        selected_piece = board->getSquareAt(file, rank)->getOccupant();
        selected_piece_position = board->getSquareAt(file, rank);
    }
}

//funkcja zwraca wartość true jezeli pionek został poruszony
//jeżeli nie zwraca false
bool Player::movePiece(int file, int rank) {
    //poruszana jest wybrana przez gracza bierka, (selected_piece)
    //tak więc należy najpierw sprawdzić czy jakikolwiek pionek jest wybrany
    // selected_piece -> moveAt Square(rank, file),
    //Na podstawie, schematu ruchów pionka oraz sytuacji na SDzachownicy oceniana jest możliwość 
    //Wykonania danego ruchu i odbywa się on bądź nie

    //Sprawdzenie czy wybrany ruch jest zgodny ze schematem ruchów pionka
    if(selected_piece->checkWithMovePattern(selected_piece_position->getFile(), selected_piece_position->getRank(),file, rank)) {
        std::cout << "Pozycja nie zgodna ze schematem ruchow pionka. \n";
        
        //Sprawdzenie warunków dla danego ruchu

        selected_piece_position->setOccupant(NULL);
        board->getSquareAt(file, rank)->setOccupant(selected_piece);
        selected_piece = NULL;
        selected_piece_position = NULL;

        return true;
    } else {
        std::cout << "Pozycja nie zgodna ze schematem ruchow pionka. \n";
        selected_piece = NULL;
        selected_piece_position = NULL;
        
        return false;
    }



}