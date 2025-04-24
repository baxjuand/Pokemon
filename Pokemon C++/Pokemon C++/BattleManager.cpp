//
//  BattleManager.cpp
//  Pokemon C++
//
//  Created by David Bayona on 21/04/25.
//

#include "BattleManager.hpp"
#include <iostream>

using namespace std;

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
    cout << "A wild " << wildPokemon.name << " appeared!" << endl;
    
    while (!playerPokemon.isFainted() && !wildPokemon.isFainted())
    {
        playerPokemon.attack(wildPokemon);
        
        if (!wildPokemon.isFainted())
        {
            wildPokemon.attack(playerPokemon);
        }
        
    }
        
        if (!playerPokemon.isFainted())
        {
            cout << playerPokemon.name << " has fainted! You loose the battle!" << endl;
        }
        
        else
        {
            cout << "You defeated the wild " << wildPokemon.name << endl;
        }

}
