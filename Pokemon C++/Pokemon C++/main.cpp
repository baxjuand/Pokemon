#include <iostream>
#include <string>
using namespace std;

enum class PokemonChoice
{
    Bulbasaur,
    Charmander,
    Squirtle,
    Pikachu,
    InvalidChoice
};

enum class PokemonType
{
    Fire,
    Electric,
    Water,
    Grass,
    Normal
};

class Pokemon
{
    public:
        string name;
        PokemonType type;
        int health;


        // 2 Constructors
        Pokemon()
        {
            
        }

        Pokemon(string p_name, PokemonType p_type, int p_health)
        {

        }

        //Attack Function
        void Attack()
        {
            cout << name << " attacks wtih a powerful move!" << endl;
        }
};

class Player
{
    public:
    string name;
    Pokemon chosenPokemon;

    //Choose Pokémon
    void choosePokemon(int choice)
    {
        switch ((PokemonChoice)choice)
        {
            case PokemonChoice::Charmander:
            {
                chosenPokemon = Pokemon("Charmander", PokemonType::Fire, 100); 
                break; 
            }
                    
            case PokemonChoice::Bulbasaur:
            {
                chosenPokemon = Pokemon("Bulbasaur", PokemonType::Grass, 100); 
                break; 

            } 
                    
            case PokemonChoice::Squirtle:
            {
                chosenPokemon = Pokemon("Squirtle", PokemonType::Water, 100); 
                break; 
            }
                   
            default:
            {
                chosenPokemon = Pokemon("Pikachu", PokemonType::Electric, 100); 
                break; 
            } 
                    
        } 
        
        cout << name << ", you chose " << chosenPokemon.name << endl;
    }


};

class ProfessorOak
{
    public:
    string name;
    
    //Function text to greet the player
    void greetPlayer(Player &player)
    {
        
    }
    
    //Function to offer choices to the player
    void offerPokemonChoices(Player &player)
    {
        
    }
    
};



int main ()
{

    string playerName;
    int pokemonChoice;
    PokemonChoice chosenPokemon = PokemonChoice::InvalidChoice;

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
        chosenPokemon = PokemonChoice::Bulbasaur;
        break;

        case 2:
        chosenPokemon = PokemonChoice::Charmander;
        break;

        case 3:
        chosenPokemon = PokemonChoice::Squirtle;
        break;

        case 7:
        chosenPokemon = PokemonChoice::Pikachu;
        break;

        default:
        chosenPokemon = PokemonChoice::InvalidChoice;
    }

    switch (chosenPokemon)
    {
        case PokemonChoice::Bulbasaur:
        cout << "You chose Bulbasaur! A wise choice." << endl;
        break;

        case PokemonChoice::Charmander:
        cout << "You chose Charmander! A fiery choice." << endl;
        break;

        case PokemonChoice::Squirtle:
        cout << "You chose Squirtle! A cool choice." << endl;
        break;

        case PokemonChoice::Pikachu:
        cout << "You saw that other pokéball, didn't you...?" << endl;
        cout << "You chose Pikachu! An electrifying turn of events." << endl;
        break;

        default:
        cout << "Hmm, that doesn't seem right. Let me choose for you...\n";
        chosenPokemon = PokemonChoice::Charmander;
        cout << "Let's go with Charmander, the fiery dragon in the making!\n";
        break;
    }

    cout << "Ah, an excellent choice! " << (chosenPokemon == PokemonChoice::Bulbasaur ? "Bulbasaur" : chosenPokemon == PokemonChoice::Charmander ? "Charmander" : chosenPokemon == PokemonChoice::Squirtle ? "Squirtle" : "Pikachu")
         << " and you, will make a great team!" << endl;
    cout << "But beware, " << playerName << "," << endl;
    cout << "this is only the beginning." << endl;
    cout << "Your journey is about to unfold." << endl;
    cout << "Now let’s see if you’ve got what it takes to keep going!" << endl;
    cout << "Good luck, and remember… Choose wisely!" << endl;

    return 0;
}
