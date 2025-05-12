//
//  Bulbasaur.cpp
//  Pokemon C++
//
//  Created by David Bayona on 29/04/25.
//
#include "Bulbasaur.hpp"
#include "utility.hpp"
#include "Move.hpp"
#include "../../../include/Pokemon/PokemonType.hpp"
#include <iostream>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
    namespace N_Pokemons
    {
    
    Bulbasaur::Bulbasaur() : Pokemon("Bulbasaur", PokemonType::Grass, 100, 100, 35,
    {
        Move("Vine Whip", 25),
        Move("Tackle", 10)
    }) {}
    
    /*void Bulbasaur::vineWhip(Pokemon *target)
    {
        cout << name << " uses Vine Whip on " << target->getName() << endl;
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
    
    void Bulbasaur::attack(Move selectedMove, Pokemon *target)
    {
        Pokemon::attack(selectedMove, target);
        
        if (selectedMove.name == "Vine Whip")
        {
            int secondHitChance = rand() % 2;
            
            if (secondHitChance == 1)
            {
                Pokemon::attack(selectedMove, target);
                cout << name << "hits again with a second " << selectedMove.name << endl;
            }
            else
            {
                cout << target->getName() << " dodged the second hit" << endl;
            }
        }
        
    }
    
    }
}
