#include "PokemonType.hpp"
#include "Pokemon.hpp"
#include "Player.hpp"
#include "ProfessorOak.hpp"
#include "Utility.hpp"
#include "Game.hpp"
#include <iostream>
#include <limits>
#include <string>
using namespace std;


int main ()
{
    //Object creation
    Pokemon bulbasaur("Bulbasaur", PokemonType::Grass, 100);
    Player player("Juanda", bulbasaur);
    ProfessorOak professorOak("Professor Oak");
    
    //Greeting and Pokemon Choice
    professorOak.greetPlayer(player);
    professorOak.offerPokemonChoices(player);
    
    //Main Quest Explanation
    professorOak.explainMainQuest(player);
    
    //Start the gameloop
    gameLoop(player);
    
    
    return 0;
    
}
