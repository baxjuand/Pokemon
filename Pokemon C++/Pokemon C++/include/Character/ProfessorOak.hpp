//
//  ProfessorOak.hpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#pragma once
#include <string>

namespace N_Character
{

    class ProfessorOak
    {
    public:
        string name;
        int choice;
        
        //Parametrized constructor
        ProfessorOak(const string &p_name);
        
        //Function text to greet the player
        void greetPlayer(N_Player::Player &player);
        
        //Function to offer choices to the player
        void offerPokemonChoices(N_Player::Player &player);
        
        //Function to introduce main quest
        void explainMainQuest(N_Player::Player &player);
    };
}


