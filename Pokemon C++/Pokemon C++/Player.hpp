//
//  Player.hpp
//  Pokemon C++
//
//  Created by David Bayona on 12/04/25.
//

#include <string>
using namespace std;

//class Pokemon;

//Player class definition
class Player
{
public:
    string name;
    Pokemon chosenPokemon;
    
    
    //Constructors
    Player();
    Player(const string &p_name, const Pokemon &p_chosenPokemon);
    Player(const Player &other);
    
    //Function to Choose Pokémon
    void choosePokemon(int choice);
};
