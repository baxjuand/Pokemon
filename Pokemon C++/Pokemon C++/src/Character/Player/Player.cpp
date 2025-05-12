//
//  Player.cpp
//  Pokemon C++
//
//  Created by David Bayona on 12/04/25.
//
#include "PokemonType.hpp"
#include "PokemonChoice.hpp"
#include "Pokemon.hpp"
#include "Charmander.hpp"
#include "Bulbasaur.hpp"
#include "Squirtle.hpp"
#include "Pikachu.hpp"
#include "Player.hpp"
#include "Utility.hpp"
#include <iostream>
#include <string>
using namespace std;
using namespace N_Pokemon;
using namespace N_Pokemons;

namespace N_Player
{

    //Constructors
    Player::Player()
    {
        name = "Trainer";
    }

    Player::Player(const string &p_name, const Pokemon &p_chosenPokemon)
    {
        name = p_name;
    }

    Player::Player(const Player &other)
    {
        name = other.name;
    }

    //Function to Choose Pokémon
    void Player::choosePokemon(int choice)
    {
        switch ((PokemonChoice)choice)
        {
            case PokemonChoice::Charmander:
            {
                chosenPokemon = new Charmander();
                break;
            }
                    
            case PokemonChoice::Bulbasaur:
            {
                chosenPokemon = new Bulbasaur();
                break;

            }
                    
            case PokemonChoice::Squirtle:
            {
                chosenPokemon = new Squirtle();
                break;
            }
                   
            default:
            {
                chosenPokemon = new Pikachu();
                break;
            }
                    
        }
        
        cout << name << ", you chose " << chosenPokemon->getName() << endl;
        N_Utility::Utility::waitForEnter();
    }
}


