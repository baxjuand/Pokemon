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
using namespace N_Character;
using namespace N_Player;
using namespace N_Main;


int main ()
{
    //Object creation
    Pokemon *pokemon1 = new Pokemon("Bulbasaur", N_Pokemon::PokemonType::Grass, 100, 100, 13);
    Player *player = new Player("Juanda", *pokemon1);
    ProfessorOak *professorOak = new ProfessorOak("Professor Oak");
    Game *game = new Game();
    
    //Greeting and Pokemon Choice
    professorOak->greetPlayer(*player);
    professorOak->offerPokemonChoices(*player);
    
    //Main Quest Explanation
    professorOak->explainMainQuest(*player);
    
    //Start the gameloop
    game->gameLoop(*player);
    
    delete professorOak;
    delete pokemon1;
    delete player;
    delete game;
    
    
    return 0;
    
}
