//
//  Player.hpp
//  Pokemon C++
//
//  Created by David Bayona on 12/04/25.
//
#pragma once
#include <string>
using namespace std;
using namespace N_Pokemon;

namespace N_Player
{

    //Player class definition
    class Player
    {
    public:
        string name;
        Pokemon chosenPokemon;
        
        
        //Constructors
        Player();
        Player(const string &p_name, const Pokemon &p_chosenPokemon);
        Player(const Player &other);
        
        //Function to Choose Pokémon
        void choosePokemon(int choice);
    };

}
