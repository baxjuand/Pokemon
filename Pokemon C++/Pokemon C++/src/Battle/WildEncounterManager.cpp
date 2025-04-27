//
//  WildEncounterManager.cpp
//  Pokemon C++
//
//  Created by David Bayona on 17/04/25.
//

#include "WildEncounterManager.hpp"
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager()
{
    srand(time(0));
    
}

Pokemon WildEncounterManager::getRandomPokemonFromGrass(const Grass &grass)
{
    static Pokemon returnedPokemon;
    
    int randomIndex = rand() % grass.wildPokemonList.size();
    returnedPokemon = grass.wildPokemonList[randomIndex];
    return returnedPokemon;
}
