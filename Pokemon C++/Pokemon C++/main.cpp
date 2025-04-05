#include <iostream>
#include <string>
using namespace std;

enum class PokemonChoice
{
    Bulbasaur = 1,
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
            name = p_name;
            type = p_type;
            health = p_health;
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
    int choice;
    
    //Function text to greet the player
    void greetPlayer(Player &player)
    {
        cout << name << ": Ah, Trainer!" << endl;
        cout << name << ": Welcome to the world of Pokémon!" << endl;
        cout << name << ": Today is a momentous day—you’ll be choosing your very first Pokémon." << endl;
        cout << name << ": Every great Trainer remembers this moment for the rest of their lives." << endl;
        cout << name << ": So, choose wisely, young one!" << endl;
        
    }
    
    //Function to offer choices to the player
    void offerPokemonChoices(Player &player)
    {
        cout << name << ": What is your name, trainer? " << endl;
        getline(cin, player.name);
        cout << name << "Nice to meet you, " << player.name << "!" << endl;
        cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!\n";
        
        //Pokemon choices presentation
        cout << name << ": I have three Pokémon you can choose from to start your joureny!" << endl;
        cout << name << ": You can choose:" << endl;
        cout << name << ": 1. Bulbasaur - The grass type." << endl;
        cout << name << ": 2. Charmander - The fire type" << endl;
        cout << name << ": 3. Squirtle - The water type" << endl;
        cout << name << ": Choose wiseley!" << endl;
        
        cout << name << ": Are you ready to make a choice? (Type the number fo your choice:" << endl;
        cin >> choice;
        player.choosePokemon(choice);
        
    }
    
};



int main ()
{
    //Object creation
    Player player;
    Pokemon placeHolderPokemon;
    ProfessorOak professorOak;
    
    //Value assignment to placeHolderPokemon
    placeHolderPokemon.name = "Pikachu";
    placeHolderPokemon.type = PokemonType::Electric;
    placeHolderPokemon.health = 40;
    
    //Value assignment to player
    player.name = "Trainer";
    
    //Value assignment to professorOak
    professorOak.name = "Professor Oak";
    
    //Greeting player and offering pokemon choices
    professorOak.greetPlayer(player);
    professorOak.offerPokemonChoices(player);
    
    //Printing Trainer and Chosen Pokemon Choice
    cout << "Trainer name: " << player.name << endl;
    cout << "Chosen Pokemon Name: " << player.chosenPokemon.name << endl;
    

    return 0;
}
