//
//  Pokemon.hpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//

#include <string>
using namespace std;

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;
    
    //Constructors
    Pokemon();
    Pokemon(const string &p_name, PokemonType p_type, int p_health);
    Pokemon(const Pokemon &other);
    
    //Destructor
    ~Pokemon();
    
    void attack();
    
};
