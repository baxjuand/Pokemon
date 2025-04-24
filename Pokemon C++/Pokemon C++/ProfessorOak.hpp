//
//  ProfessorOak.hpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#pragma once
#include <string>
using namespace std;

class Player;

class ProfessorOak
{
public:
    string name;
    int choice;
    
    //Parametrized constructor
    ProfessorOak(const string& p_name);
    
    //Function text to greet the player
    void greetPlayer(Player& player);
    
    //Function to offer choices to the player
    void offerPokemonChoices(Player& player);
    
    //Function to introduce main quest
    void explainMainQuest(Player& player);
};
