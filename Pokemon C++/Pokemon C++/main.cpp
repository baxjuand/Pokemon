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
using namespace N_Player;
using namespace N_Character;
using namespace N_Main;


int main ()
{
    //Object creation
    Player *player = new Player();
    ProfessorOak *professorOak = new ProfessorOak("Professor Oak");
    Game *game = new Game();
    
    //Greeting and Pokemon Choice
    professorOak->greetPlayer(*player);
    professorOak->offerPokemonChoices(*player);
    
    //Main Quest Explanation
    professorOak->explainMainQuest(*player);
    
    //Start the gameloop
    game->gameLoop(*player);
    
    delete player;
    delete professorOak;
    delete game;
    
    
    return 0;
    
}
