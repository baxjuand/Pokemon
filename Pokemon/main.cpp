#include <iostream>
#include <string>
using namespace std;

int main ()
{

    string playerName;
    int pokemonChoice;
    string chosenPokemon;

    cout << "Professor Oak:" << endl;
    cout << "Ah, Trainer!" << endl;
    cout << "Welcome to the world of Pokémon!" << endl;
    cout << "Today is a momentous day—you’ll be choosing your very first Pokémon." << endl;
    cout << "Every great Trainer remembers this moment for the rest of their lives." << endl;
    cout << "So, choose wisely, young one!" << endl;
    cout << "What is your name, trainer? " << endl;

    cin >> playerName;

    cout << "Nice to meet you, " << playerName << "!" << endl;
    cout << "I have three Pokémon you can choose from to start your joureny!\n You can choose:\n 1. Bulbasaur\n 2. Charmander\n 3. Squirtle\n" << endl;
    cout << "Choose wiseley!" << endl;

    cin >> pokemonChoice;

    switch(pokemonChoice)
    {
        case 1:
        chosenPokemon = "Bulbasaur";
        cout << "You chose Bulbasaur! A wise choice." << endl;
        break;

        case 2:
        chosenPokemon = "Charmander";
        cout << "You chose Charmander! A fiery choice." << endl;
        break;

        case 3:
        chosenPokemon = "Squirtle";
        cout << "You chose Squirtle! A cool choice." << endl;
        break;

        default:
        chosenPokemon = "Pikachu";
        cout << "You saw that other pokéball, didn't you...?\nHere, you can have Pikachu!" << endl;
    }

    cout << "Ah, an excellent choice!" << endl;
    cout << "But beware, " << playerName << "," << endl;
    cout << "this is only the beginning." << endl;
    cout << "Your journey is about to unfold." << endl;
    cout << "Now let’s see if you’ve got what it takes to keep going!" << endl;
    cout << "Good luck, and remember… Choose wisely!" << endl;

    return 0;
}