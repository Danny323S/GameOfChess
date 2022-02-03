#include "Player.h"

Piece* Player::getSelectedPiece() {
    return selected_piece;
}

Player::Player(Color color, Chessboard &chessboard) {
    // z konsoli pobierana jest nazwa użytkownika, i przypisywana jest graczowi
    // przypisywany jest wektor bierek gracza
    // przypisywany jest wskaźnik na króla
    this->chessboard = &chessboard;
    this->color = color;
    this->selected_piece = NULL; 
}

void Player::selectPiece(int file, int rank) {
    //do klasy ChessBoard wysyłane jest zapytanie czy pionek na polu (rank, file)
    //może zostać wybrany przez gracza
    //jeżeli na wskazanym polu znajduje się pionek i jest on koloru gracza
    //bierka jest wybierana.
    // board->getSquareAt(rank, file)

    if(chessboard->getSquareAt(file, rank)->isOccupied()) {
        // if (this->color == chessboard->getSquareAt(file, rank)->getOccupant()->getColor())
        selected_piece = chessboard->getSquareAt(file, rank)->getOccupant();
    } else {
        selected_piece = nullptr;
        std::cout << "Nie wybrano bierki";
    }   
}

//funkcja zwraca wartość true jezeli pionek został poruszony
//jeżeli nie zwraca false
bool Player::movePiece(int file, int rank) {
    if( selected_piece != nullptr) {
        Piece *piece_to_capture = nullptr;
    //poruszana jest wybrana przez gracza bierka, (selected_piece)
    //tak więc należy najpierw sprawdzić czy jakikolwiek pionek jest wybrany
    // selected_piece -> moveAt Square(rank, file),
    //Na podstawie, schematu ruchów pionka oraz sytuacji na SDzachownicy oceniana jest możliwość 
    //Wykonania danego ruchu i odbywa się on bądź nie
        if(selected_piece->checkMove(file, rank, piece_to_capture)) {
            chessboard->update(selected_piece, file, rank, piece_to_capture);
            return true;
        } else {
            std::cout << "Pozycja nie zgodna ze schematem ruchow pionka. \n";
            selected_piece = nullptr;
            return false;
        }
    } else {
        std::cout << "Wybrano pionek przeciwnego kloru lub\n";
        std::cout << "nie wybrano go wcale\n";
        return false;
    }
}

Color Player::getColor() {
    return this->color;
}
