//
//  WildEncounterManager.cpp
//  Pokemon C++
//
//  Created by David Bayona on 17/04/25.
//

#include "WildEncounterManager.hpp"
#include "Grass.hpp"
#include <cstdlib>
#include <ctime>

WildEncounterManager::WildEncounterManager()
{
    srand(time(0));
    
}

WildPokemon WildEncounterManager::getRandomPokemonFromGrass(<#const Grass &grass#>)
{
    int randomIndex = rand() % Grass.wildPokemonList.size();
    return Grass.wildPokemonList[randomIndex];
}
