#include <iostream>
#include <SFML/Graphics.hpp>
#include "GameService.h"


/*
class Player {

private:

    // Private Properties
    int health = 3;
    sf::Vector2f position = sf::Vector2f(200.0f, 100.0f);
    int movement_speed = 1;
    int player_score = 0;

public:

    // Public Properties
    sf::Texture player_texture;
    sf::Sprite player_sprite;

    //Public Getter & Setter methods
    int getScore() {
        return player_score;
    };

    void setScore(int newScore) {
        player_score = newScore;
    };

    void move(float offsetX) {
        position.x += offsetX;
    }

    int getMoveSpeed() {
        return movement_speed;
    }

    sf::Vector2f getPosition() {
        return position;
    }

    //New methods
    void takeDamage() {};
    void move() {};
    void shootBullets() {};

};
*/

int main() {

    /*
    sf::VideoMode videoMode = sf::VideoMode(800, 600); // Define the video mode (dimensions)

    sf::RenderWindow window(videoMode, "SFML Window");  // Create a window object

    Player player;  // Create the player object

    player.player_texture.loadFromFile("assets/textures/player_ship.png"); // Load the player ship texture

    player.player_sprite.setTexture(player.player_texture);  // Set the player sprite variable 

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            // Check for window closure
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Handle keyboard input
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            player.move(-1.0f * player.getMoveSpeed());
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            player.move(1.0f * player.getMoveSpeed());
        }

        // Clear the window
        window.clear(sf::Color::Blue); // this code will set a blue background color (optional)

        player.player_sprite.setPosition(player.getPosition()); // Set the position of the player sprite

        window.draw(player.player_sprite);    // Draw the player sprite

        window.display(); // Display what was drawn

    } // end while loop
    */

    GameService game_service; //create object
    game_service.ignite(); // this will 'ignite' or start the flow of our game

    // while the game is running we will update the game loop
    while (game_service.isRunning())
    {
        game_service.update();
        game_service.render();
    }

    return 0;
}