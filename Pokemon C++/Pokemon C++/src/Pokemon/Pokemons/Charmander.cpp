//
//  Charmander.cpp
//  Pokemon C++
//
//  Created by David Bayona on 29/04/25.
//
#include "Charmander.hpp"
#include "utility.hpp"
#include "Move.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
    
    Charmander::Charmander() : Pokemon("Charmander", PokemonType::Fire, 100, 100, 35,
    {
        Move("Flame Thrower", 25),
        Move("Blazing Charge", 70),
        Move("Tackel", 10)
    }) {}
    
    /*void Charmander::flameThrower(Pokemon *target)
    {
        cout << name << " uses Flame Thrower on " << target->getName() << endl;
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
    
    void Charmander::attack(Move selectedMove, Pokemon *target)
    {
        Pokemon::attack(selectedMove, target);
        
        if (selectedMove.name == "Blazing Charge")
        {
            int recoilDamage = 10;
            
            this->takeDamage(recoilDamage);
            cout << name << " takes " << recoilDamage << " recoil damage from Blazing Charge!" << endl;
        }
    }
    
    }
}
