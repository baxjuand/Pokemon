//
//  Charmander.cpp
//  Pokemon C++
//
//  Created by David Bayona on 29/04/25.
//
#include "Charmander.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
    
    Charmander::Charmander() : Pokemon("Charmander", PokemonType::Fire, 100, 100, 35) {}
    
    void Charmander::flameThrower(Pokemon &target)
    {
        cout << name << " uses Flame Thrower on " << target.getName() << endl;
        target.takeDamage(20);
    }
    
    void Charmander::attack(Pokemon *target)
    {
        flameThrower(*target);
    }
    
    }
}
