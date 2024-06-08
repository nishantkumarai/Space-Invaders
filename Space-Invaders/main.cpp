#include <SFML/Graphics.hpp>

int main() {

    // Define the video mode (dimensions)
    sf::VideoMode videoMode = *(new sf::VideoMode(800, 600));

    // Create a window object with specific dimensions and a title
    sf::RenderWindow* window = new sf::RenderWindow(videoMode, "My SFML Window");

    // Game loop to keep the window open
    while (window->isOpen()) {
        sf::Event event;
        while (window->pollEvent(event)) {
            // Check for window closure
            if (event.type == sf::Event::Closed)
                window->close();
        }

        // Clear the window
        window->clear(sf::Color::White);

        // Draw your content here...
        
        // Draw a circle
        sf::CircleShape circle(50); // Radius 50
        circle.setFillColor(sf::Color::Green);
        circle.setPosition(400, 300); // Set position
        window->draw(circle);

        // Draw a square
        sf::RectangleShape square(sf::Vector2f(100, 100));
        square.setFillColor(sf::Color::Red); // Red color
        square.setPosition(300.f, 100.f); // Set position
        window->draw(square);

        // Draw a tringle
        sf::ConvexShape triangle;
        triangle.setPointCount(3);
        triangle.setPoint(0, sf::Vector2f(500, 100));  // Top point
        triangle.setPoint(1, sf::Vector2f(650, 250));  // Right point
        triangle.setPoint(2, sf::Vector2f(350, 250));  // Left point
        triangle.setFillColor(sf::Color::Blue); // Blue color

        window->draw(triangle);


        // Display what was drawn
        window->display();
    }

    return 0;
}