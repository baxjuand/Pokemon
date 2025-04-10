#include <iostream>
#include <string>
using namespace std;

void clearConsole()
{
    system("clear");
    //Will not work as I'm on a mac.
}

void waitForEnter()
{
    cout << "Press Enter to continue)" << endl;
    cin.get();
}

enum class PokemonChoice
{
    Bulbasaur = 1,
    Charmander,
    Squirtle,
    Pikachu,
    MaxValue = 0xff
};

enum class PokemonType
{
    Fire,
    Electric,
    Water,
    Grass,
    Normal,
    MaxValue = 0xff //Optimization for the compiler. Good optimization practice.
};

class Pokemon
{
    public:
    string name;
    PokemonType type;
    int health;


    //Constructors
    Pokemon()
    {
        name = "Pikachu";
        type = PokemonType::Electric;
        health = 10;
    }

    Pokemon(const string &p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
    }
    
    Pokemon(const Pokemon &other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
        
    }
    
    //Destructor
    ~Pokemon()
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
    
    Player()
    {
        name = "Trainer";
        chosenPokemon = Pokemon();
    }
    
    Player(const string &p_name, const Pokemon &p_chosenPokemon)
    {
        name = p_name;
        chosenPokemon = p_chosenPokemon;
    }
    
    Player(const Player &other)
    {
        name = other.name;
        chosenPokemon = other.chosenPokemon;
    }

    //Function to Choose Pokémon
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
    
    //Constructor
    ProfessorOak(const string &p_name)
    {
        name = p_name;
    }
    
    //Function text to greet the player
    void greetPlayer(Player &player)
    {
        cout << name << ": Ah, Trainer!" << endl;
        waitForEnter();
        cout << name << ": Welcome to the world of Pokémon!" << endl;
        waitForEnter();
        cout << name << ": Today is a momentous day—you’ll be choosing your very first Pokémon." << endl;
        waitForEnter();
        cout << name << ": Every great Trainer remembers this moment for the rest of their lives." << endl;
        waitForEnter();
        cout << name << ": So, choose wisely, young one!" << endl;
        waitForEnter();
        clearConsole();
        
    }
    
    //Function to offer choices to the player
    void offerPokemonChoices(Player &player)
    {
        cout << name << ": What is your name, trainer? " << endl;
        getline(cin, player.name);
        cout << name << ": Nice to meet you, " << player.name << "!" << endl;
        waitForEnter();
        cout << name << ": You must be eager to start your adventure. But first, you’ll need a Pokemon of your own!" << endl;
        waitForEnter();
        clearConsole();
        
        //Pokemon choices presentation
        cout << name << ": I have three Pokémon you can choose from to start your joureny!" << endl;
        waitForEnter();
        cout << name << ": You can choose:" << endl;
        waitForEnter();
        cout << name << ": 1. Bulbasaur - The grass type." << endl;
        waitForEnter();
        cout << name << ": 2. Charmander - The fire type" << endl;
        waitForEnter();
        cout << name << ": 3. Squirtle - The water type" << endl;
        waitForEnter();
        cout << name << ": Choose wiseley!" << endl;
        waitForEnter();
        
        cout << name << ": Are you ready to make a choice? (Type the number fo your choice:" << endl;
        cin >> choice;
        player.choosePokemon(choice);
        clearConsole();
        
    }
    
    //Function to introduce main quest
    void explainMainQuest(Player &player)
    {
        cout << "Professor Oak: Oak-ay " << player.name << " I am about to explain you about your upcoming grand adventure." << endl;
        waitForEnter();
        cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck." << endl;
        waitForEnter();
        cout << "Professor Oak: Your mission, should you choose to accept it (and trust me, you really don’t have a choice) is to collect all the Pokémon Badges and conquer the Pokémon League." << endl;
        waitForEnter();
        cout << player.name << ": Wait... that sounds a lot like every other Pokémon game out there." << endl;
        waitForEnter();
        cout << "Professor Oak: Shhh! Don't break the fourth wall " << player.name << "! This is serious business." << endl;
        waitForEnter();
        cout << "Professor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter." << endl;
        waitForEnter();
        cout << " Professor Oak:   Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!" << endl;
        waitForEnter();
        cout << player.name << ": Sounds like a walk in the park... right?" << endl;
        waitForEnter();
        cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one." << endl;
        waitForEnter();
        cout << " Professor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?" << endl;
        waitForEnter();
        cout << player.name << ": Ready as I’ll ever be, Professor!" << endl;
        waitForEnter();
        cout << "Professor Oak: That’s the spirit! Now, your journey begins." << endl;
        waitForEnter();
        cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!" << endl;
        waitForEnter();
        clearConsole();
        

    }
    
};

void gameLoop(Player &player)
{
    bool keepPlaying = true;
    int choice;
    char quitChoice;
    
    while(keepPlaying)
    {
        clearConsole();
        
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
        
        waitForEnter();
    }
    
    cout << "Goodbye, " << player.name << "! Thanks for playing!" << endl;;
}



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
    

    return 0;
}
