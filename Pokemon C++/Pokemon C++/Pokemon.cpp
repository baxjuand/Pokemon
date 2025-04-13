//
//  Pokemon.cpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Pokemon.hpp"
#include <iostream>
#include <string>
using namespace std;

//Default constructors
Pokemon::Pokemon()
{
    name = "Unknown";
    type = PokemonType::Normal;
    health = 20;
}

//Parametrized constructor
Pokemon::Pokemon(const string &p_name, PokemonType p_type, int p_health)
{
    name = p_name;
    type = p_type;
    health = p_health;
}

//Copy constructor
Pokemon::Pokemon(const Pokemon &other)
{
    name = other.name;
    type = other.type;
    health = other.health;
    
}

//Destructor
Pokemon::~Pokemon()
{
    
}

//Attack Function
void Pokemon::attack()
{
    cout << name << " attacks wtih a powerful move!" << endl;
}
