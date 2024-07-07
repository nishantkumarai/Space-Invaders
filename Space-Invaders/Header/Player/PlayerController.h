#pragma once
#include <SFML/Graphics.hpp>
//#include "../Player/PlayerModel.h"
//#include "../Player/PlayerView.h"

enum class PlayerState;
class PlayerView;
class PlayerModel;

class PlayerController
{
private:
    PlayerView* player_view;
    PlayerModel* player_model;

    void processPlayerInput();
    void moveLeft();
    void moveRight();

public:
    PlayerController();
    ~PlayerController();

    void initialize();
    void update();
    void render();

    sf::Vector2f getPlayerPosition();
};