//
//  Caterpie.cpp
//  Pokemon C++
//
//  Created by David Bayona on 28/04/25.
//
#include "Caterpie.hpp"
#include "Utility.hpp"
#include "PokemonType.hpp"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
    
    Caterpie::Caterpie() : Pokemon("Caterpie", PokemonType::Bug, 100, 100, 10) {}
    
    void Caterpie::bugBite(Pokemon *target)
    {
        cout << name << " uses Bug Bite on " << target->getName() << endl;
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
    
    void Caterpie::attack(Pokemon *target)
    {
        bugBite(target);
    }
    
    }
}
