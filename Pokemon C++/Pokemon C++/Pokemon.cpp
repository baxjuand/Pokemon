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
Pokemon::Pokemon(const string& p_name, PokemonType p_type, int p_health)
{
    name = p_name;
    type = p_type;
    health = p_health;
}

//Copy constructor
Pokemon::Pokemon(const Pokemon& other)
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
void Pokemon::attack(Pokemon& target)
{
    int damage = 10;
    
    cout << name << " attacks " << target.name << "for " << damage << "damage!" << endl;
    
    target.takeDamage(damage);
}

//Take Damage Function
void Pokemon::takeDamage(int damage)
{
    health -= damage;
    if(health <= 0)
    {
        health = 0;
    }
}

//Alive Status Function
bool Pokemon::isFainted() const
{
    return (health <= 0);
}
