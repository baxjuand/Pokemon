//
//  Bulbasaur.cpp
//  Pokemon C++
//
//  Created by David Bayona on 29/04/25.
//
#include "Bulbasaur.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
    
    Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100, 100, 35) {}
    
    void Bulbasaur::vineWhip(Pokemon &target)
    {
        cout << name << " uses Vine Whip on " << target.getName() << endl;
        target.takeDamage(20);
    }
    
    }
}
