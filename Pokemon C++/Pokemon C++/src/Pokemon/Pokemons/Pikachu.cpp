//
//  Pikachu.cpp
//  Pokemon C++
//
//  Created by David Bayona on 27/04/25.
//
#include "../../../include/Pokemon/Pokemons/Pikachu.hpp"
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
    
    Pikachu::Pikachu() : Pokemon("Pikachu", PokemonType::Electric, 100, 100, 40,
    {
        Move("Thunder Shock", 25),
        Move("Thunder Bolt", 80),
        Move("Tackle", 15)
    }) {}
    
    /*void Pikachu::thunderShock(Pokemon *target)
    {
        cout << name << " uses Thunder Shock on " << target->getName() << endl;
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
    
    void Pikachu::attack(Move selectedMove, Pokemon *target)
    {
        if (selectedMove.name == "Thunder Bolt")
        {
            if (rand() % 100 < 80)
            {
                Pokemon::attack(selectedMove, target);
                cout << " and it hits successfuly!" << endl;
            }
            else
            {
                cout << " but it failed!" << endl;
            }
        }
        else
        {
            Pokemon::attack(selectedMove, target);
        }
    }
    
    }
}
 
