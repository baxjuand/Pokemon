//
//  Zubat.cpp
//  Pokemon C++
//
//  Created by David Bayona on 28/04/25.
//
#include "Zubat.hpp"
#include "utility.hpp"
#include "Move.hpp"
#include "PokemonType.hpp"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
    
    Zubat::Zubat() : Pokemon("Zubat", PokemonType::Poison, 100, 100, 20,
    {
        Move("Supersonic", 12),
        Move("Leech Life", 10),
        Move("Tackle", 8)
        
    }) {}
    /*void Zubat::supersonic(Pokemon *target)
    {
        cout << name << " uses Thunder Shock on " << target->getName() << endl;
        Utility::waitForEnter();
        
        target->takeDamage(attackPower);
        
        if (target->isFainted())
        {
            cout << target->getName() << " fainted!" << endl;
        }
        else
        {
            cout << target->getName() << " HP: " << target->getHealth() << endl;
        }

    }*/
    
    void Zubat::attack(Move selectedMove, Pokemon *target)
    {
        Pokemon::attack(selectedMove, target);
        
        
        if (selectedMove.name == "Leech Life")
        {
            int regainedHealth = selectedMove.power * 0.6;
            
            this->health += regainedHealth;
            
            if (this->health > this->maxHealth)
            {
                this->health = this->maxHealth;
            }
            
            cout << " and restores " << regainedHealth << " HP!" << endl;
        }
    }
    
    }
}
