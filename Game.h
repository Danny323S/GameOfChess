#ifndef GAME_H
#define GAME_H
#include <string.h>
#include "DisplayManager.h"
#include "Player.h"
#include "ChessBoard.h"

class Game {
private:
    bool white_round;
    bool is_running;

    Chessboard board;
    DisplayManager display_manager;

    Player w_player;
    Player b_player;

public:
    Game();
    bool run();
    void control();    
};

#endif