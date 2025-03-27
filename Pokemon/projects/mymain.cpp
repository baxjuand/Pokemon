#include <iostream>
using namespace std;

int main ()
{

    string playerName;
    int pokemonChoice;

    cout << "Hi! Welcome to the world of Pokémon! My name is Professor Oak." << endl;
    cout << "What is your name trainer? " << endl;

    cin >> playerName;

    cout << "Nice to meet you, " << playerName << "!" << endl;
    cout << "I have three Pokémon you can choose from to start your joureny!\n You can choose:\n 1. Bulbasaur\n 2. Charmander\n 3. Squirtle\n" << endl;
    cout << "Choose wiseley!" << endl;

    cin >> pokemonChoice;

    if (pokemonChoice == 1)
    {
        cout << "You chose Bulbasaur! A wise choice." << endl;
    }

    else if (pokemonChoice == 2)
    {
        cout << "You chose Charmander! A fiery choice." << endl;
    }

    else if (pokemonChoice == 3)
    {
        cout << "You chose Squirtle! A cool choice." << endl;
    }

    else if (pokemonChoice == 7)
    {
        cout << "You saw that other pokéball, didn't you?\n Here, you can have Pikachu!" << endl;
    }

    else
    {
        cout << "Invalid choice. Please restart the game." << endl;
    }

    return 0;
}