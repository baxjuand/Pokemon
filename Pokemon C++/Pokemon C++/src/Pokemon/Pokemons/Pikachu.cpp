//
//  Pikachu.cpp
//  Pokemon C++
//
//  Created by David Bayona on 27/04/25.
//
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

using namespace std;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
    
    Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, 100, 20) {}
    
    void Pikachu::thunderShock(Pokemon *target)
    {
        cout << name << " uses Thunder Shock on " << target->getName() << endl;
        target->takeDamage(20);
    }
    
    void Pikachu::attack(Pokemon *target)
    {
        thunderShock(target);
    }
    
    }
}
