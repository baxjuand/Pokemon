//
//  BattleManager.hpp
//  Pokemon C++
//
//  Created by David Bayona on 21/04/25.
//
#pragma once

class Pokemon;
class Player;

class BattleManager
{
public:
    
    void startBattle(Player& player, Pokemon& wildPokemon);
    
private:
    
    void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
    
    void handleBattleOutcome (Player& player, bool playerWon);
    
    
};
