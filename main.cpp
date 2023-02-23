#include "interface/button.hpp"
#include "interface/scene.hpp"

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(2560, 1440), "Chess");
    intrfc::Menu menu(window);
    
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        
        // Clear screen
        window.clear();
        
        menu.draw();
        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
