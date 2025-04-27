//
//  Grass.hpp
//  Pokemon C++
//
//  Created by David Bayona on 15/04/25.
//

//#pragma once
#ifndef myGrass
#define myGrass
#include "Pokemon.hpp"
#include <string>
#include <vector>
using namespace std;

struct Grass
{
    
    int encounterRate;
    vector <Pokemon> wildPokemonList;
    string environmentType;
    
};

#endif
