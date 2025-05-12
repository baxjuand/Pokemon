//
//  Grass.cpp
//  Pokemon C++
//
//  Created by David Bayona on 17/04/25.
//
#include "Grass.hpp"
#include "PokemonType.hpp"
#include "Zubat.hpp"
#include "Geodude.hpp"
#include "Caterpie.hpp"
#include "Pidgey.hpp"
#include <iostream>
#include <vector>

namespace N_Pokemon
{

using namespace N_Pokemons;

    Grass caveGrass
    {
        80,
        {
            new Zubat(),
            new Geodude()
        },
        "Cave"
        
    };

    Grass forestGrass
    {
        80,
        {
            new Zubat(),
            new Caterpie(),
            new Pidgey()
            
        },
        "Cave"
        
    };
}
