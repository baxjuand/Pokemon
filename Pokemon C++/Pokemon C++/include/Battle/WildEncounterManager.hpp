//
//  WildEncounterManager.hpp
//  Pokemon C++
//
//  Created by David Bayona on 17/04/25.
//

#pragma once
#include "Grass.hpp"
#include "Pokemon.hpp"
#include <vector>

class WildEncounterManager
{
public:
    
    //Constructors
    
    WildEncounterManager();
    
    Pokemon getRandomPokemonFromGrass(const Grass &grass);
    
};
