//
//  BattleManager.hpp
//  Pokemon C++
//
//  Created by David Bayona on 21/04/25.
//
#pragma once
#include "BattleState.hpp"
#include "Player.hpp"

using namespace N_Player;
using namespace N_Pokemon;

namespace N_Battle
{
    class BattleManager
    {
        
    public:
        
        void startBattle(Player& player, Pokemon& wildPokemon);
        
    private:
        
        BattleState battleState;
        
        void battle();
        
        void handleBattleOutcome ();
        
        void updateBattleState();
        
        
    };
}


