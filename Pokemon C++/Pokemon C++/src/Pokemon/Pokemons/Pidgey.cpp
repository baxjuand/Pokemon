//
//  Pidgey.cpp
//  Pokemon C++
//
//  Created by David Bayona on 28/04/25.
//
#include "Pidgey.hpp"
#include "PokemonType.hpp"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
    Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Flying, 100, 100, 35) {}
    
    void Pidgey::wingAttack(Pokemon &target)
    {
        cout << name << " uses Wing Attack on " << target.name << endl;
        target.takeDamage(20);
    }
    
    }
}
