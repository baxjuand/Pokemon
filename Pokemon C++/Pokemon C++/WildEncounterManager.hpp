//
//  WildEncounterManager.hpp
//  Pokemon C++
//
//  Created by David Bayona on 17/04/25.
//

#include "Grass.hpp"
#include <vector>

class WildEncounterManager
{
public:
    
    //Constructors
    
    WildEncounterManager();
    
    WildPokemon getRandomPokemonFromGrass(const Grass &grass);
    
};
