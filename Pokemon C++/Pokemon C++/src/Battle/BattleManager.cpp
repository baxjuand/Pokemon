//
//  BattleManager.cpp
//  Pokemon C++
//
//  Created by David Bayona on 21/04/25.
//

#include "BattleManager.hpp"
#include "Pokemon.hpp"
#include "Player.hpp"
#include "Utility.hpp"
#include <iostream>

using namespace std;
using namespace N_Player;
using namespace N_Pokemon;

namespace N_Battle
{
    void BattleManager::startBattle(Player &player, Pokemon &wildPokemon)
    {
        battleState.playerPokemon = &player.chosenPokemon;
        battleState.wildPokemon = &wildPokemon;
        battleState.isPlayerTurn = true;
        battleState.isBattleOngoing = true;
        
        cout << "A wild " << wildPokemon.name << " appeared!" << endl;
        
        battle();
    }

    void BattleManager::battle()
    {
            
        while (battleState.isBattleOngoing)
        {
            //playerPokemon.attack(wildPokemon);
            
            if (battleState.isPlayerTurn)
            {
                battleState.playerPokemon->attack(*battleState.wildPokemon);
            }
            
            else
            {
                battleState.wildPokemon->attack(*battleState.playerPokemon);
            }
            
            updateBattleState();
            
            battleState.isPlayerTurn = !battleState.isPlayerTurn;
            
            N_Utility::Utility::waitForEnter();
            
            
        }
        
            handleBattleOutcome();
        
            /*if (!playerPokemon.isFainted())
            {
                cout << playerPokemon.name << " has fainted! You loose the battle!" << endl;
            }
            
            else
            {
                cout << "You defeated the wild " << wildPokemon.name << endl;
            }*/
        
    }

    void BattleManager::handleBattleOutcome()
    {
        if (battleState.playerPokemon->isFainted())
        {
            cout << battleState.playerPokemon->name << " has fainted! You lose the battle." << endl;
            N_Utility::Utility::waitForEnter();
            cout << "Game Over" << endl;
        }
        
        else
        {
            cout << "You defeated the wild " << battleState.wildPokemon->name << "!" << endl;
        }
    }

    void BattleManager::updateBattleState()
    {
        if (battleState.playerPokemon->isFainted())
        {
            battleState.isBattleOngoing = false;
        }
        
        else if (battleState.wildPokemon->isFainted())
        {
            battleState.isBattleOngoing = false;
        }
    }
}



