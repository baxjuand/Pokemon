//
//  Pokemon.hpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#pragma once
#include <string>
using namespace std;

enum class PokemonType;

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;
    int maxHealth;
    
    //Constructors
    Pokemon();
    Pokemon(const string &p_name, PokemonType p_type, int p_health);
    Pokemon(const Pokemon &other);
    
    //Destructor
    ~Pokemon();
    
    void attack(Pokemon& target);
    
    //Take Damage function
    void takeDamage(int damage);
    
    //Alive status check function
    bool isFainted() const;
    
};
