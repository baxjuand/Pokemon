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
#include <iostream>
using namespace std;


void gameLoop(Player &player)
{
    bool keepPlaying = true;
    int choice;
    char quitChoice;
    
    Grass caveGrass
    {
        80,
        {{"Zubat", PokemonType::Normal, 25}, {"Geodude", PokemonType::Rock, 45}},
        "Cave"
      
    };
    
    Grass forestGrass
    {
        80,
        {{"Zubat", PokemonType::Normal, 25}, {"Caterpie", PokemonType::Insect, 12}, {"Pidgey", PokemonType::Flying, 20}},
        "Cave"
      
    };
    
    while(keepPlaying)
    {
        Utility::clearConsole();
        
        cout << "What would you like to do next " << player.name << endl;
        cout << "1. Battle Wild Pokémon" << endl;
        cout << "2. Visit PokeCenter" << endl;
        cout << "3. Challenge Gyms" << endl;
        cout << "4. Enter Pokémon League" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice:" << endl;
        cin >> choice;
        
        switch(choice)
        {
            case 1:
            {
                cout << "UUUoooOH a wild kitchen appears. Time for dinner!" << endl;
                break;
            }
            
            case 2:
            {
                cout << "The free clinic it is" << endl;
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
        
        Utility::waitForEnter();
    }
    
    cout << "Goodbye, " << player.name << "! Thanks for playing!" << endl;;
}
