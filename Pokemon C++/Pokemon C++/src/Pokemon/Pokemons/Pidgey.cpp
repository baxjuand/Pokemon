//
//  Pidgey.cpp
//  Pokemon C++
//
//  Created by David Bayona on 28/04/25.
//
#include "Pidgey.hpp"
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
    Pidgey::Pidgey() : Pokemon("Pidgey", PokemonType::Flying, 100, 100, 35,
    {
        Move("wing Attack", 20),
        Move("Gust", 15),
        Move("Tackle", 10)
    }) {}
    
    /*void Pidgey::wingAttack(Pokemon *target)
    {
        cout << name << " uses Wing Attack on " << target->getName() << endl;
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
    
    void Pidgey::attack(Move selectedMove,Pokemon *target)
    {
        selectAndUseMove(target);
    }
    
    }
}
