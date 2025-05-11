//
//  Squirtle.cpp
//  Pokemon C++
//
//  Created by David Bayona on 29/04/25.
//
#include "Squirtle.hpp"
#include "PokemonType.hpp"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
    namespace N_Pokemons
    {

    Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, 100, 35) {}

    void Squirtle::waterSplash(Pokemon *target)
    {
        cout << name << " uses Water Splash on " << target->getName() << endl;
        target->takeDamage(20);
    }
    
    void Squirtle::attack(Pokemon *target)
    {
        waterSplash(target);
    }

    }
}

