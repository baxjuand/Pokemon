//
//  Grass.cpp
//  Pokemon C++
//
//  Created by David Bayona on 17/04/25.
//
#include "Grass.hpp"
#include "PokemonType.hpp"
#include <iostream>

Grass caveGrass
{
    80,
    {{"Zubat", PokemonType::Normal, 25}, {"Geodude", PokemonType::Rock, 45}},
    "Cave"
  
};

Grass forestGrass
{
    80,
    {{"Zubat", PokemonType::Normal, 25}, {"Caterpie", PokemonType::Insect, 12}, {"Pidgey", PokemonType::Flying, 20}},
    "Cave"
  
};
