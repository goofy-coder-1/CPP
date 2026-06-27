#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    // Create the window and cap the framerate at 60 FPS
    sf::RenderWindow window(sf::VideoMode(800, 600), "Click to Break the Circle!");
    window.setFramerateLimit(60);

    // Create a target circle
    sf::CircleShape targetCircle(50.f); // Radius of 50 pixels
    targetCircle.setFillColor(sf::Color::Cyan);
    targetCircle.setPosition(350.f, 250.f); // Centered in our 800x600 window

    // A basic boolean data type to track if the circle is broken
    bool isBroken = false;

    // The Main Game Loop
    while (window.isOpen()) {
        sf::Event event;
        
        // Event Handling Loop
        while (window.pollEvent(event)) {
            // Close window if 'X' or Escape is pressed
            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape)
                window.close();

            // Check if the user pressed the Mouse Button
            if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    
                    // Get the current (X, Y) coordinates of the mouse click
                    sf::Vector2f mousePos(event.mouseButton.x, event.mouseButton.y);

                    // Check if that mouse position is INSIDE the circle's boundaries
                    if (targetCircle.getGlobalBounds().contains(mousePos)) {
                        isBroken = true; 
                        std::cout << "Circle Smashed! BOINK!" << std::endl; // Prints to terminal
                    }
                }
            }
        }

        // Rendering Phase
        // If the circle is broken, turn the background Red. Otherwise, keep it Black.
        if (isBroken) {
            window.clear(sf::Color(150, 0, 0)); // Dark Red background
        } else {
            window.clear(sf::Color::Black);
        }

        // Only draw the circle if it hasn't been broken yet
        if (!isBroken) {
            window.draw(targetCircle);
        }

        window.display();
    }

    return 0;
}