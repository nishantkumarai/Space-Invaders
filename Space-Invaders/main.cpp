#include <iostream>
#include <SFML/Graphics.hpp>
#include "Header/GameService.h"


/*
class Player
{

private:

    int health = 3;
    sf::Vector2f position = sf::Vector2f(200.0f, 100.0f);
    int movement_speed = 1;
    int player_score = 0;

public:

    // Properties
    sf::Texture player_texture;
    sf::Sprite player_sprite;

    //functions
    void move(float offsetX) {
        position.x += offsetX;
    }

    int getMoveSpeed() {
        return movement_speed;
    }

    sf::Vector2f getPosition() {
        return position;
    }

};
*/

int main() {

    /*
    // Define the video mode (dimensions)
    sf::VideoMode videoMode = sf::VideoMode(800, 600);

    // Create a window object with specific dimensions and a title
    sf::RenderWindow window(videoMode, "SFML Window");

    // Using default constructor
    Player player;

    // Load the player ship texture  
    player.player_texture.loadFromFile("assets/textures/player_ship.png");

    // Set the player sprite variable to the player ship texture
    player.player_sprite.setTexture(player.player_texture);

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
        window.clear(sf::Color::Blue);

        // Set the position of the player sprite
        player.player_sprite.setPosition(player.getPosition());

        // Draw the player sprite
        window.draw(player.player_sprite);

        // Display what was drawn
        window.display();
    }
    */

    GameService* game_service = new GameService(); //create object
    game_service->ignite(); // this will 'ignite' or start the flow of our game

    // while the game is running we will update the game loop
    while (game_service->isRunning())
    {
        game_service->update();
        game_service->render();
    }

    return 0;
}