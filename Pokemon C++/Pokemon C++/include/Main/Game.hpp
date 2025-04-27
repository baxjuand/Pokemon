//
//  Game.hpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#pragma once
#include "Grass.hpp"
using namespace N_Player;

namespace N_Main
{
    class Game
    {
    private:
        Grass forestGrass;
        
    public:
        Game();
        void gameLoop(Player& player);
        
    };
}




