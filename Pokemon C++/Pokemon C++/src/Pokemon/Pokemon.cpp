//
//  Pokemon.cpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#include "PokemonChoice.hpp"
#include "PokemonType.hpp"
#include "Pokemon.hpp"
#include "Move.hpp"
#include "Utility.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace N_Utility;

namespace N_Pokemon
{
    //Default constructors
    Pokemon::Pokemon()
    {
        name = "Unknown";
        type = PokemonType::Normal;
        health = 20;
        maxHealth = 20;
        attackPower = 10;
    }

    //Parametrized constructor
    Pokemon::Pokemon(const string& p_name, PokemonType p_type, int p_health, int p_maxHealth, int p_attackPower, vector<Move> moves)
    {
        name = p_name;
        type = p_type;
        health = p_health;
        maxHealth = p_maxHealth;
        attackPower = p_attackPower;
    }

    //Copy constructor
    Pokemon::Pokemon(const Pokemon& other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        maxHealth = other.maxHealth;
        attackPower = other.attackPower;
        
    }

    //Destructor
    Pokemon::~Pokemon()
    {
        
    }

    //Take Damage Function
    void Pokemon::takeDamage(int damage)
    {
        health -= damage;
        if(health <= 0)
        {
            health = 0;
        }
    }

    //Alive Status Function
    bool Pokemon::isFainted() const
    {
        return (health <= 0);
    }

    //Heal Method
    void Pokemon::heal()
    {
        health = maxHealth;
    }

    //Get Pokemon Name
    string Pokemon::getName()
    {
        return name;
    }

    // Get Pokemon Health
    int Pokemon::getHealth()
    {
        return health;
    }

    // Get Pokemon Max Health
    int Pokemon::getMaxHealth()
    {
        return maxHealth;
    }

    //Get Pokemon Attack Power
    int Pokemon::getAttackPower()
    {
        return attackPower;
        
    }

    //Reduce Attack Power
    void Pokemon::reduceAttackPower(int reducedDamage)
    {
        attackPower -= reducedDamage;
        
    }

    //Print Pokemon Available Moves
    void Pokemon::printAvailableMoves()
    {
        cout << name << "'s available moves:" << endl;
        
        //List the moves available
        for (size_t i = 0; i < moves.size(); i++)
        {
            cout << i + 1 << ": " << moves[i].name << "(Power: " << moves[i].power << ")" << endl;
        }
    }

    //Pokemon Move Selector
    void Pokemon::selectAndUseMove(Pokemon *target)
    {
        printAvailableMoves();
        
        int choice = selectMove();
        Move selectedMove = moves[choice -1];
        
        useMove(selectedMove, target);
    }

    //Pokemon return selected move
    int Pokemon::selectMove()
    {
        int choice;
        
        cout << "Choose a move: ";
        cin >> choice;
        
        while (choice < 1 || choice > static_cast<int>(moves.size()))
        {
            cout << "Invalid Choice. Choose Agian: ";
            cin >> choice;
        }
        
        return choice;
    }

    //Use Pokemon Move
    void Pokemon::useMove(Move selectedMove, Pokemon *target)
    {
        cout << name << "used " << selectedMove.name << endl;
        attack(selectedMove, target);
        
        Utility::waitForEnter();
        
        cout << "..." << endl;
        Utility::waitForEnter();
        
        if (target->isFainted())
        {
            cout << target->name << " fainted!" << endl;
        }
        else
        {
            cout << target->name << " HP: " << target->health << endl;
        }
        
        
    }

    //Attack Definition
    void Pokemon::attack(Move selectedMove, Pokemon *target)
    {
        target->takeDamage(selectedMove.power);
    }

    //Clear Effect Definition
    void Pokemon::clearEffect()
    {
        cout << "Effect cleared!" << endl;
    }

}

