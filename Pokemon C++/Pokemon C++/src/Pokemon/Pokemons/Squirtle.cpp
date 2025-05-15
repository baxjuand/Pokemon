//
//  Squirtle.cpp
//  Pokemon C++
//
//  Created by David Bayona on 29/04/25.
//
#include "Squirtle.hpp"
#include "utility.hpp"
#include "Move.hpp"
#include "PokemonType.hpp"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {

    Squirtle::Squirtle() : Pokemon("Squirtle", PokemonType::Water, 100, 100, 35,
    {
        Move("Water Slpash", 25),
        Move("Rapid Spin", 5),
        Move("Tackle", 10)
            
    }) {}

    /*void Squirtle::waterSplash(Pokemon *target)
    {
        cout << name << " uses Water Splash on " << target->getName() << endl;
        Utility::waitForEnter();
        
        target->takeDamage(attackPower);
        
        if (target->isFainted())
        {
            cout << target->getName() << " fainted!" << endl;
        }
        else
        {
            cout << target->getName() << " HP: " << target->getHealth() << endl;
        }
    }*/
    
    void Squirtle::attack(Move selectedMove, Pokemon *target)
    {
        Pokemon::attack(selectedMove, target);
        
        int hits = (rand() % 4) +2;
        
        if (selectedMove.name == "Rapid Spin")
        {
            
            for (int i = 0; i < hits; i++)
            {
                Pokemon::attack(selectedMove, target);
            }
        }
        
        cout << " and hits " << hits << " times!" << endl;
    }
    
    

    }
}

