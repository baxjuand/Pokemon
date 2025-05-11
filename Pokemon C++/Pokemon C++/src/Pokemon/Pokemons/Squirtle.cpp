//
//  Squirtle.cpp
//  Pokemon C++
//
//  Created by David Bayona on 29/04/25.
//
#include "Squirtle.hpp"
#include "utility.hpp"
#include "PokemonType.hpp"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {

    Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, 100, 35) {}

    void Squirtle::waterSplash(Pokemon *target)
    {
        cout << name << " uses Water Splash on " << target->getName() << endl;
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
    }
    
    void Squirtle::attack(Pokemon *target)
    {
        waterSplash(target);
    }

    }
}

