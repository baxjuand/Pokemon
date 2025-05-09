//
//  Player.hpp
//  Pokemon C++
//
//  Created by David Bayona on 12/04/25.
//
#pragma once
#include <string>
using namespace std;

namespace N_Player
{

    //Player class definition
    class Player
    {
    public:
        string name;
        N_Pokemon::Pokemon chosenPokemon;
        
        
        //Constructors
        Player();
        Player(const string &p_name, const N_Pokemon::Pokemon &p_chosenPokemon);
        Player(const Player &other);
        
        //Function to Choose Pokémon
        void choosePokemon(int choice);
    };

}
