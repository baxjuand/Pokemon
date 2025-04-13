//
//  Player.cpp
//  Pokemon C++
//
//  Created by David Bayona on 12/04/25.
//

#include "Player.hpp"
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Utility.hpp"
#include <iostream>
using namespace std;


//Constructors
Player::Player()
{
    name = "Trainer";
    chosenPokemon = Pokemon();
}

Player::Player(const string &p_name, const Pokemon &p_chosenPokemon)
{
    name = p_name;
    chosenPokemon = p_chosenPokemon;
}

Player::Player(const Player &other)
{
    name = other.name;
    chosenPokemon = other.chosenPokemon;
}

//Function to Choose Pokémon
void Player::choosePokemon(int choice)
{
    switch ((PokemonChoice)choice)
    {
        case PokemonChoice::Charmander:
        {
            chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100);
            break;
        }
                
        case PokemonChoice::Bulbasaur:
        {
            chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100);
            break;

        }
                
        case PokemonChoice::Squirtle:
        {
            chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100);
            break;
        }
               
        default:
        {
            chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100);
            break;
        }
                
    }
    
    cout << name << ", you chose " << chosenPokemon.name << endl;
    Utility::waitForEnter();
}
