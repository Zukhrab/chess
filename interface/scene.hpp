//
//  scene.hpp
//  chess
//
//  Created by Зухраб Асаханов on 11.02.2023.
//  Copyright © 2023 Зухраб Асаханов. All rights reserved.
//

#ifndef scene_hpp
#define scene_hpp

#include "button.hpp"

namespace intrfc
{
    class Menu: public Button
    {
        private:
            sf::RenderWindow& window;
            sf::Texture background;
            sf::Sprite backSprite;
            sf::Text text;
            sf::Font font;
            int buttSizeX;
            int buttSizeY;
            int buttPosX;
            int buttPosY;
        
            Button beginGame;
            Button settings;
            Button exit;
        
        public:
            Menu(sf::RenderWindow& w);
            void draw();
    };

    class Settings: public Button
    {
        private:
            sf::Texture background;
            sf::Sprite backSprite;
            sf::Text text;
            sf::Font font;
            
            int buttSizeX;
            int buttSizeY;
            int buttPosX;
            int buttPosY;

        public:
            Settings(sf::RenderWindow& window);
    };
}
#endif /* scene_hpp */
