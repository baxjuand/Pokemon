//
//  Pokemon.hpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#pragma once
#include <string>
using namespace std;

namespace N_Pokemon
{

enum class PokemonType;

    class Pokemon
    {
    protected:
        
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;
        
    public:
        
        
        
        //Constructors
        Pokemon();
        Pokemon(const string& p_name, PokemonType p_type, int p_health, int p_maxHealth, int p_attackPower);
        Pokemon(const Pokemon &other);
        
        //Destructor
        ~Pokemon();
        
        void attack(Pokemon& target);
        
        //Take Damage function
        void takeDamage(int damage);
        
        //Alive status check function
        bool isFainted() const;
        
        //Heal method
        void heal();
        
        //Name Getter
        const string& getName();
        
    };
}


