//
//  Grass.cpp
//  Pokemon C++
//
//  Created by David Bayona on 17/04/25.
//
#include "../../include/Pokemon/Grass.hpp"
#include "../../include/Pokemon/PokemonType.hpp"
#include <iostream>
#include <vector>
#include <string>


namespace N_Pokemon
{
    Grass caveGrass
    {
        80,
        {
            {"Zubat", PokemonType::Normal, 25, 25, 12},
            {"Geodude", PokemonType::Rock, 45, 45, 18}
        },
        "Cave"
        
    };

    Grass forestGrass
    {
        80,
        {
            {"Zubat", PokemonType::Normal, 25, 25, 12},
            {"Caterpie", PokemonType::Bug, 12, 12, 2},
            {"Pidgey", PokemonType::Flying, 40, 40, 5}
        },
        "Cave"
        
    };
}
