//
//  BattleState.hpp
//  Pokemon C++
//
//  Created by David Bayona on 24/04/25.
//
#pragma once
#include "Pokemon.hpp"
using namespace N_Pokemon;

namespace N_Battle
{

    //class Pokemon;

    struct BattleState
    {
        Pokemon* playerPokemon;
        Pokemon* wildPokemon;
        bool isPlayerTurn;
        bool isBattleOngoing;
    };

}
