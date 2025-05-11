//
//  Geodude.cpp
//  Pokemon C++
//
//  Created by David Bayona on 29/04/25.
//
#include "Geodude.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
    
    Geodude::Geodude() : Pokemon("Geodude", PokemonType::Rock, 45, 45, 18) {}
    
    void Geodude::rockSlide(Pokemon *target)
    {
        cout << name << " uses Rock Slide on " << target->getName() << endl;
        target->takeDamage(20);
    }
    
    void Geodude::attack(Pokemon *target)
    {
        rockSlide(target);
    }
    
    }
}
