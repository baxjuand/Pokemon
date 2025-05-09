//
//  Game.hpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#pragma once
#include "Grass.hpp"

namespace N_Main
{
    class Game
    {
    private:
       N_Pokemon::Grass forestGrass;
        
    public:
        Game();
        void gameLoop(N_Player::Player &player);
        
    };
}




