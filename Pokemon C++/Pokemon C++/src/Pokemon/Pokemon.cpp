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

namespace N_Pokemon
{
    //Default constructors
    Pokemon::Pokemon()
    {
        name = "Unknown";
        type = PokemonType::Normal;
        health = 20;
        maxHealth = 50;
        attackPower = 10;
    }

    //Parametrized constructor
    Pokemon::Pokemon(const string& p_name, PokemonType p_type, int p_health, int p_maxHealth, int p_attackPower)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        maxHealth = p_maxHealth;
        attackPower = p_attackPower;
    }

    //Copy constructor
    Pokemon::Pokemon(const Pokemon& other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        attackPower = other.attackPower;
        
    }

    //Destructor
    Pokemon::~Pokemon()
    {
        
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

    //Heal Method
    void Pokemon::heal()
    {
        health = maxHealth;
    }

    //Name Getter
    const string& Pokemon::getName()
    {
        return name;
    }

}

