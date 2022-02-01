#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <SFML/Graphics.hpp>

#define WINDOW_WIDTH 1000
#define WINDOW_HIGHT 1000


class MainWindow {
private:
    sf::RenderWindow main_window;
    sf::CircleShape shape;

public:
    MainWindow();
    void render();

};

#endif