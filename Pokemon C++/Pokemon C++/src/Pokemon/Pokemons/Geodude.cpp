//
//  Geodude.cpp
//  Pokemon C++
//
//  Created by David Bayona on 29/04/25.
//
#include "Geodude.hpp"
#include "utility.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
    
    Geodude::Geodude() : Pokemon("Geodude", PokemonType::Rock, 45, 45, 18) {}
    
    void Geodude::rockSlide(Pokemon *target)
    {
        cout << name << " uses Rock Slide on " << target->getName() << endl;
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
    
    void Geodude::attack(Pokemon *target)
    {
        rockSlide(target);
    }
    
    }
}
