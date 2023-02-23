//
//  button.hpp
//  chess
//
//  Created by Зухраб Асаханов on 11.02.2023.
//  Copyright © 2023 Зухраб Асаханов. All rights reserved.
//

#ifndef button_hpp
#define button_hpp

#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

namespace intrfc
{
    class Button
    {
        private:
            sf::Texture texture;
            sf::Sprite sprite;
            sf::Text buttonText;
            sf::Font textFont;
            bool clicked;
            bool clickedTwice;
        
        public:
        
            Button() = default;
            Button(std::string path);
            Button(std::string path, sf::Vector2<int> size, sf::Vector2<int> buttPos, sf::Vector2<int> textPos, sf::String text);
            ~Button() = default;
        
            void setClicked(bool);
            void setClickedTwice(bool);
            bool getClicked() const;
            bool getClickedTwice() const;
        
            void draw(sf::RenderWindow& window) const;
            void setButtonPosition(int x, int y);
    };
}
#endif /* button_hpp */
