//
//  scene.cpp
//  chess
//
//  Created by Зухраб Асаханов on 11.02.2023.
//  Copyright © 2023 Зухраб Асаханов. All rights reserved.
//

#include "scene.hpp"

namespace intrfc
{
    Menu::Menu(sf::RenderWindow& w): window(w)
    {
        background.loadFromFile("Users/zukhrabasakhanov/Documents/chess/chess/Assets/cover2.jpg");
        backSprite.setTexture(background);
        
        font.loadFromFile("Users/zukhrabasakhanov/Documents/chess/chess/Assets/asher-punk-demo-version.ttf");
        
        beginGame = Button("Users/zukhrabasakhanov/Documents/chess/chess/Assets/buttonCover.jpeg", sf::Vector2<int>(400, 90), sf::Vector2<int>(1960, 1000), sf::Vector2<int>(2090, 1010), "Start");
        
        settings = Button("Users/zukhrabasakhanov/Documents/chess/chess/Assets/buttonCover.jpeg", sf::Vector2<int>(400, 90), sf::Vector2<int>(1960, 1100), sf::Vector2<int>(2050, 1110), "Settings");
        
        exit = Button("Users/zukhrabasakhanov/Documents/chess/chess/Assets/buttonCover.jpeg", sf::Vector2<int>(400, 90), sf::Vector2<int>(1960, 1200), sf::Vector2<int>(2110, 1210), "Exit");
       
    }

    void Menu::draw() {
        window.draw(backSprite);
        
        beginGame.draw(window);
        settings.draw(window);
        exit.draw(window);
    }
}

