//
//  Game.cpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#include "PokemonType.hpp"
#include "Pokemon.hpp"
#include "Player.hpp"
#include "Game.hpp"
#include "Utility.hpp"
#include "Grass.hpp"
#include "WildEncounterManager.hpp"
#include "BattleManager.hpp"
#include <iostream>
using namespace std;
using namespace N_Player;
using namespace N_Battle;
using namespace N_Pokemon;

namespace N_Main
{
    Game::Game()
    {
        forestGrass =
        {70,
        {Pokemon("Pidgey", N_Pokemon::PokemonType::Normal, 40, 40 , 5),
         Pokemon("Caterpie", N_Pokemon::PokemonType::Bug, 35, 35, 2),
         Pokemon("Zubat", N_Pokemon::PokemonType::Flying, 30, 30, 12)},
            "Forest"};
    }

    void Game::gameLoop(Player& player)
    {
        BattleManager battleManager;
        bool keepPlaying = true;
        int choice;
        char quitChoice;
        
        
        
        
        while(keepPlaying)
        {
            N_Utility::Utility::clearConsole();
            
            cout << "What would you like to do next " << player.name << endl;
            cout << "1. Battle Wild Pokémon" << endl;
            cout << "2. Visit PokeCenter" << endl;
            cout << "3. Challenge Gyms" << endl;
            cout << "4. Enter Pokémon League" << endl;
            cout << "5. Quit" << endl;
            cout << "Enter your choice:" << endl;
            cin >> choice;
            
            N_Utility::Utility::clearInputBuffer();
            
            switch(choice)
            {
                case 1:
                {
                    WildEncounterManager encounterManager;
                    Pokemon encounteredPokemon = encounterManager.getRandomPokemonFromGrass(forestGrass);
                    
                    battleManager.startBattle(player, encounteredPokemon);
                    
                    cout << "A wild " << encounteredPokemon.name << " appeared!" << endl;
                    break;
                }
                
                case 2:
                {
                    cout << "You enter a PokéCenter" << endl;
                    player.chosenPokemon.heal();
                    cout << player.chosenPokemon.name << "'s health is fully restored!!" << endl;
                    break;
                }
                    
                case 3:
                {
                    cout << "Do you even lift, bro?" << endl;
                    break;
                }
                
                case 4:
                {
                    cout << "You're registering with what, now?" << endl;
                    break;
                }
                
                case 5:
                {
                    cout << "Bye Felicia" << endl;
                    cout << "Are you sure you want to quit? (y/n)" << endl;
                    
                    cin >> quitChoice;
                    if(quitChoice == 'y' || quitChoice == 'Y')
                    {
                        keepPlaying = false;
                    }
                    break;
                }
                    
                default:
                {
                    cout << "Wrong choice, try again" << endl;
                    break;
                }
            }
            
            N_Utility::Utility::waitForEnter();
        }
        
        cout << "Goodbye, " << player.name << "! Thanks for playing!" << endl;;
    }

}

