//
//  Player.cpp
//  Pokemon C++
//
//  Created by David Bayona on 12/04/25.
//
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Pokemon.hpp"
#include "Player.hpp"
#include "Utility.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace N_Pokemon;

namespace N_Player
{

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
                chosenPokemon = Pokemon("Charmander", N_Pokemon::PokemonType::Fire, 100, 100, 13);
                break;
            }
                    
            case PokemonChoice::Bulbasaur:
            {
                chosenPokemon = Pokemon("Bulbasaur", N_Pokemon::PokemonType::Grass, 100, 100, 13);
                break;

            }
                    
            case PokemonChoice::Squirtle:
            {
                chosenPokemon = Pokemon("Squirtle", N_Pokemon::PokemonType::Water, 100, 100, 13);
                break;
            }
                   
            default:
            {
                chosenPokemon = Pokemon("Pikachu", N_Pokemon::PokemonType::Electric, 100, 100, 13);
                break;
            }
                    
        }
        
        cout << name << ", you chose " << chosenPokemon.name << endl;
        N_Utility::Utility::waitForEnter();
    }
}


