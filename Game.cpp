#include "Game.h"
// : board(), display_manager(board), w_player(white ,board), b_player(black ,board)
Game::Game() : board(), display_manager(board), w_player(white ,board), b_player(black ,board) {
    is_running = true;
    white_round = true;
    // board = Chessboard();
    // display_manager = DisplayManager(board);
    // w_player = Player(white, board);
    // b_player = Player(black, board);
    // display_manager.render();
}

bool Game::run(int selected_piece_file, int selected_piece_rank, int destination_file, int destination_rank) {
    // display_manager.render();
    turn(selected_piece_file, selected_piece_rank, destination_file, destination_rank);

    return false;
}

void Game::turn(int selected_piece_file, int selected_piece_rank, int destination_file, int destination_rank) {
    Player *actual_player;

    if(white_round) {
        actual_player = &w_player;
        std::cout << "Ruch Bialego\n";
    } else {
        actual_player = &b_player;
        std::cout << "Ruch Czarnego\n";
    }

    std::cout << selected_piece_file << std::endl;
    std::cout << selected_piece_rank << std::endl;
    std::cout << destination_file << std::endl;
    std::cout << destination_rank << std::endl;

    if (board.getSquareAt(selected_piece_file,selected_piece_rank)->isOccupied()) {
        if (board.getSquareAt(selected_piece_file,selected_piece_rank)->getOccupant()->getColor() == actual_player->getColor()) {
            actual_player->selectPiece(selected_piece_file, selected_piece_rank);
        }

        if(actual_player->movePiece(destination_file, destination_rank)) {
            white_round = !white_round;
            std::cout << "Koniec tury";
        } else {
            std::cout << "Bierka nie może poruszyć się na dane pole";
        }
    } else {
        std::cout << "Na wybaranym polu nie ma bierki";
    }
}


Chessboard* Game::getChessboard() {
    return &board;
}     