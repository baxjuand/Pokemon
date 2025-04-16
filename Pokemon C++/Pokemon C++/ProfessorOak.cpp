//
//  ProfessorOak.cpp
//  Pokemon C++
//
//  Created by David Bayona on 13/04/25.
//
#include "Pokemon.hpp"
#include "Player.hpp"
#include "ProfessorOak.hpp"
#include "Utility.hpp"
#include <iostream>
using namespace std;


//Parametrized constructor
ProfessorOak::ProfessorOak(const string &p_name)
{
    name = p_name;
}

//Function text to greet the player
void ProfessorOak::greetPlayer(Player &player)
{
    Utility::clearConsole();
    
    cout << name << ": Ah, Trainer!" << endl;
    Utility::waitForEnter();
    cout << name << ": Welcome to the world of Pokémon!" << endl;
    Utility::waitForEnter();
    cout << name << ": Today is a momentous day—you’ll be choosing your very first Pokémon." << endl;
    Utility::waitForEnter();
    cout << name << ": Every great Trainer remembers this moment for the rest of their lives." << endl;
    Utility::waitForEnter();
    cout << name << ": So, choose wisely, young one!" << endl;
    Utility::waitForEnter();
    
    
}

//Function to offer choices to the player
void ProfessorOak::offerPokemonChoices(Player &player)
{
    Utility::clearConsole();
    
    cout << name << ": What is your name, trainer? " << endl;
    getline(cin, player.name);
    cout << name << ": Nice to meet you, " << player.name << "!" << endl;
    Utility::waitForEnter();
    cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!" << endl;
    Utility::waitForEnter();
    
    
    //Pokemon choices presentation
    cout << name << ": I have three Pokémon you can choose from to start your joureny!" << endl;
    Utility::waitForEnter();
    cout << name << ": You can choose:" << endl;
    Utility::waitForEnter();
    cout << name << ": 1. Bulbasaur - The grass type." << endl;
    Utility::waitForEnter();
    cout << name << ": 2. Charmander - The fire type" << endl;
    Utility::waitForEnter();
    cout << name << ": 3. Squirtle - The water type" << endl;
    Utility::waitForEnter();
    cout << name << ": Choose wiseley!" << endl;
    Utility::waitForEnter();
    
    cout << name << ": Are you ready to make a choice? (Type the number of your choice:" << endl;
    cin >> choice;
    player.choosePokemon(choice);
    
}

//Function to introduce main quest
void ProfessorOak::explainMainQuest(Player &player)
{
    Utility::clearConsole();
    
    cout << "Professor Oak: Oak-ay " << player.name << " I am about to explain you about your upcoming grand adventure." << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League." << endl;
    Utility::waitForEnter();
    cout << player.name << ": Wait... that sounds a lot like every other Pokémon game out there." << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: Shhh! Don't break the fourth wall " << player.name << "! This is serious business." << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << endl;
    Utility::waitForEnter();
    cout << " Professor Oak:   Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!" << endl;
    Utility::waitForEnter();
    cout << player.name << ": Sounds like a walk in the park... right?" << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one." << endl;
    Utility::waitForEnter();
    cout << " Professor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?" << endl;
    Utility::waitForEnter();
    cout << player.name << ": Ready as I’ll ever be, Professor!" << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: That’s the spirit! Now, your journey begins." << endl;
    Utility::waitForEnter();
    cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << endl;
    Utility::waitForEnter();
    
    

}
