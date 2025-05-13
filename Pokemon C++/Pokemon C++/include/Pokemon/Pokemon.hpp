//
//  Pokemon.hpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#pragma once
#include <string>
#include <vector>
using namespace std;


namespace N_Pokemon
{

    enum class PokemonType;
    struct Move;

    class Pokemon
    {
    protected:
        string name;
        PokemonType type;
        int health;
        int maxHealth;
        int attackPower;
        vector<Move> moves;
        
    public:
        
        //Constructors
        Pokemon();
        Pokemon(const string& p_name, PokemonType p_type, int p_health, int p_maxHealth, int p_attackPower, vector<Move> moves);
        Pokemon(const Pokemon &other);
        
        //Destructor
        ~Pokemon();
        
        virtual void attack(Move selectedMove, Pokemon *target) = 0;
        
        //Take Damage function
        void takeDamage(int damage);
        
        //Alive status check function
        bool isFainted() const;
        
        
        //Heal method
        void heal();
        
        //Get Pokemon Name
        string getName();
        
        //Get Pokemon Health
        int getHealth();
        
        //Get Pokemon Attack Power
        int getAttackPower();
        
        //Reduce Attack Power
        void reduceAttackPower(int reducedDamage);
        
        void selectAndUseMove(Pokemon *target);
        void printAvailableMoves();
        int selectMove();
        void useMove(Move selectedMove, Pokemon *target);
        void clearEffect();
        
    };
}


