#include "MainWindow.h"

MainWindow::MainWindow() {
    game = Game();

    main_window.create(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Game of Chess");
    main_window.setFramerateLimit(60);

    chessboard_sprite = new ChessboardSprite(game.getChessboard());
}

void MainWindow::resizeMainWindow(sf::Vector2u new_size) {
    main_window.setSize(sf::Vector2u(new_size.x,new_size.x));
    // chessboard_sprite->resize(main_window.getSize());
}

void MainWindow::render() { 
    main_window.clear(sf::Color(255,255,255));
    sf::Texture texture;
    texture.loadFromFile("./src/textures/black_queen.png");
    sf::Sprite sprite;
    sprite.setTexture(texture);

    // rysowanie szachownicy
    for (unsigned int i = 0; i < chessboard_sprite->getSquares()->size(); i++) {
        main_window.draw(chessboard_sprite->getSquares()->at(i));
    }
    //rysowanie pionków
    for (unsigned int i = 0; i < chessboard_sprite->getPiecesSprites()->size(); i++) {
        main_window.draw(*chessboard_sprite->getPiecesSprites()->at(i).getSprite());
    }

    main_window.display();
}

void MainWindow::run() {

    while (main_window.isOpen())
    {
        sf::Event event;
        while (main_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed){
                main_window.close();
            } else if(event.type == sf::Event::Resized) {
                resizeMainWindow(sf::Vector2u(event.size.width, event.size.height));
            } else if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    std::cout << "mouse pressed\n"; 
                    int pressed_file = event.mouseButton.x/(main_window.getSize().x/8);
                    int pressed_rank = -(event.mouseButton.y/(main_window.getSize().y/8)-7);
                    std::cout << "pressed square: " << pressed_file << ", " << pressed_rank << "\n"; 
                }
            }
        }

        render();
    }
}

