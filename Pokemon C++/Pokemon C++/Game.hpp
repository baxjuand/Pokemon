//
//  Game.hpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#pragma once
#include "Grass.hpp"

class Player;

class Game
{
private:
    Grass forestGrass;
    
public:
    Game();
    void gameLoop(Player& player);
    
};


