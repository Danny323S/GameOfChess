#pragma once 
#include "DisplayManager.h"
#include "Player.h"
#include "ChessBoard.h"
#include <string.h>

class Game {
private:
    bool white_round;
    bool is_running;

    ChessBoard board;
    DisplayManager display_manager;

    Player w_player;
    Player b_player;

public:
    Game();
    bool run();
    void control();    
};