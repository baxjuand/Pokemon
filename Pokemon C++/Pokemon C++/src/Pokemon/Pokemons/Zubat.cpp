//
//  Zubat.cpp
//  Pokemon C++
//
//  Created by David Bayona on 28/04/25.
//
#include "Zubat.hpp"
#include "PokemonType.hpp"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
    
    Zubat::Zubat() : Pokemon("Zubat", PokemonType::Poison, 100, 100, 20) {}
    void Zubat::supersonic(Pokemon *target)
    {
        cout << name << " uses Thunder Shock on " << target->getName() << endl;
        target->takeDamage(20);

    }
    
    void Zubat::attack(Pokemon *target)
    {
        supersonic(target);
    }
    
    }
}
