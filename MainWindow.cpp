#include "MainWindow.h"

MainWindow::MainWindow() {
    main_window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HIGHT), "Gra w Szachy!");
    main_window.setFramerateLimit(60);

    shape = sf::CircleShape(100.0f);
    shape.setFillColor(sf::Color::Green);
}

void MainWindow::render() {
    
    main_window.clear();
    main_window.draw(shape);
    main_window.display();
}