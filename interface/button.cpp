//
//  button.cpp
//  chess
//
//  Created by Зухраб Асаханов on 11.02.2023.
//  Copyright © 2023 Зухраб Асаханов. All rights reserved.
//

#include "button.hpp"

namespace intrfc
{
    Button::Button(std::string path) : clicked(false), clickedTwice(false)
    {
        texture.loadFromFile(path);
        sprite.setTexture(texture);
    };

    Button::Button(std::string path, sf::Vector2<int> size, sf::Vector2<int> buttPos, sf::Vector2<int> textPos, sf::String text) : clicked(false), clickedTwice(false)
    {
        texture.loadFromFile(path, sf::IntRect(sf::Vector2<int>(120, 120), size));
        textFont.loadFromFile("Users/zukhrabasakhanov/Documents/chess/chess/Assets/asher-punk-demo-version.ttf");
        
        sprite.setTexture(texture);
        sprite.setPosition(buttPos.x, buttPos.y);
        
        buttonText.setFont(textFont);
        buttonText.setPosition(textPos.x, textPos.y);
        buttonText.setString(text) ;
        buttonText.setCharacterSize(60);
        buttonText.setFillColor(sf::Color(255, 79, 0));
    };

    void Button::setClicked(bool var) { clicked = var; };
    void Button::setClickedTwice(bool var) { clickedTwice = var; }
    bool Button::getClicked() const { return clicked; };
    bool Button::getClickedTwice() const { return clickedTwice; };
    
    void Button::setButtonPosition(int x, int y) { sprite.setPosition(x, y); };

    void Button::draw(sf::RenderWindow& window) const {
        window.draw(sprite);
        window.draw(buttonText);
    }
}
