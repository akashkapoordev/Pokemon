#include <iostream>
#include <string>
using namespace std;

void waitforEnter()
{
    cin.get();
}

void clearConsole()
{
#ifdef _WIN32
    system("cls");
#else
    (void)system("clear");
#endif
}

enum class PokemonChoice {
    Charmander = 1,
    Bulbasaur,
    Squirtle,
    Pikachu,
    InvalidChoice
};

enum class PokemonType {
    FIRE,
    GRASS,
    WATER,
    ELECTRIC
};

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;

    //Default Constructor
    Pokemon() {
        name = "unknow";
        type = PokemonType::GRASS;
        health = 60;
       
    }

    //Para Constructor
    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
       
    }

    //copy Constructor
    Pokemon(const Pokemon& other)
    {
        name = other.name;
        type = other.type;
        health = other.health;
     
    }

    ~Pokemon() {
        
    }

    void attack()
    {
        cout << name << " attacks with a powerful move!\n";
    }
};

class Player
{
public:
    string name;
    Pokemon choosenPokemon;

    //Deafault Constructor
    Player()
    {
        name = "Trainer";
        choosenPokemon = Pokemon();
    }

    //Parameterized  Constructor
    Player(string p_name, Pokemon p_choosePokemon)
    {
        name = p_name;
        choosenPokemon = p_choosePokemon;
    }
    void choosePokemon(int choice)
    {
        switch ((PokemonChoice)choice)
        {
        case PokemonChoice::Charmander:
            choosenPokemon = Pokemon("Charmander", PokemonType::FIRE, 100);
            break;
        case PokemonChoice::Bulbasaur:
            choosenPokemon = Pokemon("Bulbasaur", PokemonType::GRASS, 100);
            break;
        case PokemonChoice::Squirtle:
            choosenPokemon = Pokemon("Squirtle", PokemonType::WATER, 100);
            break;
        default:
            choosenPokemon = Pokemon("Pikachu", PokemonType::ELECTRIC, 100);
            break;
        }
    }
};

class ProfessorOak
{
public:
    string name;

    ProfessorOak(string p_name)
    {
        name = p_name;
    }
    void greetPlayer(Player& player)
    {
        // Professor introduction with visual spacing and formatting
        cout << "\n***************************************" << endl;
        cout << name << ": Greetings, young trainer!" << endl;
        waitforEnter();
        cout << name << ": Welcome to the world of Pokémon!" << endl;
        waitforEnter();
        cout << name << ": I'm Oak, and it's my honor to guide you on this exciting adventure." << endl;
        waitforEnter();
        cout << name << ": But enough about me, let's get to know you a little better." << endl;
        cout << "***************************************\n" << endl;
        waitforEnter();
    }



    void offerPokemonChoices(Player& player)
    {
        // Taking player name as input
        cout << name << ": First, what should I call you, trainer?\n";
        std::getline(cin, player.name);

        cout << "\n" << name << ": Ah, " << player.name << "! A strong name for a future Pokémon champion!" << endl;
        waitforEnter();
        cout << name << ": Now, before you set off, you'll need a Pokémon companion by your side." << endl;
        waitforEnter();

        // Presenting Pokémon choices with better formatting
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << name << ": I have three rare Pokémon here with me." << endl;
        waitforEnter();
        clearConsole();
        cout << "Choose the one that calls to your heart!" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "1. Charmander - The fire-type, full of spirit and determination." << endl;
        cout << "2. Bulbasaur - The grass-type, calm yet powerful." << endl;
        cout << "3. Squirtle - The water-type, cool and collected under pressure." << endl;

        int choice;
        cout << "\n" << name << ": So, which one will you choose? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice);
        waitforEnter();
    }

    void explainMainQuest(Player& player)
    {
        clearConsole();
        cout << "Professor Oak: Oak-ay " << player.name << "!, I am about to explain you about your upcoming grand adventure.\n";
        waitforEnter();
        cout << "Professor Oak: You see, becoming a Pokémon Master is no easy feat. It takes courage, wisdom, and a bit of luck!\n";
        waitforEnter();
        cout << "Professor Oak: Your mission, should you choose to accept it—and trust me, you really don’t have a choice—is to collect all the Pokémon Badges and conquer the Pokémon League.\n";
        waitforEnter();

        cout << "\n" << player.name << ": Wait... that sounds a lot like every other Pokémon game out there...\n";
        waitforEnter();
        cout << "Professor Oak: Shhh! Don't break the fourth wall, " << player.name << "! This is serious business!\n";
        waitforEnter();

        cout << "\nProfessor Oak: To achieve this, you’ll need to battle wild Pokémon, challenge gym leaders, and of course, keep your Pokémon healthy at the PokeCenter.\n";
        waitforEnter();
        cout << "Professor Oak: Along the way, you'll capture new Pokémon to strengthen your team. Just remember—there’s a limit to how many Pokémon you can carry, so choose wisely!\n";
        waitforEnter();

        cout << "\n" << player.name << ": Sounds like a walk in the park... right?\n";
        waitforEnter();
        cout << "Professor Oak: Hah! That’s what they all say! But beware, young Trainer, the path to victory is fraught with challenges. And if you lose a battle... well, let’s just say you'll be starting from square one.\n";
        waitforEnter();

        cout << "\nProfessor Oak: So, what do you say? Are you ready to become the next Pokémon Champion?\n";
        waitforEnter();
        cout << "\n" << player.name << ": Ready as I’ll ever be, Professor!\n";
        waitforEnter();

        cout << "\nProfessor Oak: That’s the spirit! Now, your journey begins...\n";
        waitforEnter();
        cout << "Professor Oak: But first... let's just pretend I didn't forget to set up the actual game loop... Ahem, onwards!\n";
        waitforEnter();
    }
};

void GameLoop(Player& player)
{
    int choice;
    bool  keepPlaying = true;

    while (keepPlaying)
    {
        clearConsole();
        cout << "\nWhat would you like to do next - [" << player.name << "]\n";
        cout << "1. Battle Wild Pokémon\n";
        cout << "2. Visit PokeCenter\n";
        cout << "3. Challenge Gyms\n";
        cout << "4. Enter Pokémon League\n";
        cout << "5. Quit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        switch (choice)
        {
        case 1:
            cout<< "You look around... but all the wild Pokemon are on vacation. Maybe try again later?\\n";
            break;
        case 2:
            cout<< "You head to the PokeCenter, but Nurse Joy is out on a coffee break. Guess your Pokemon will have to tough it out for now!\\n";
            break;
        case 3:
            cout<< "You march up to the Gym, but it's closed for renovations. Seems like even Gym Leaders need a break!\\n";
            break;
        case 4:
            cout<< "You boldly step towards the Pokemon League... but the gatekeeper laughs and says, 'Maybe next time, champ!'\\n";
            break;
        case 5:
            cout<< "You try to quit, but Professor Oak's voice echoes: 'There's no quitting in Pokemon training!'\\n";
            cout<< "Are you sure you want to quit? (y/n): ";
            char quitChoice;
            cin >> quitChoice;
            if (quitChoice == 'Y' || quitChoice == 'y')
            {
                keepPlaying = false;
            }
            break;
        default:
            cout << "Invalid Input \\n";
        
            break;
        }
        waitforEnter();
    }
    cout << "Goodbye, " << player.name << "! Thanks for playing!\n";
}

int main()
{
    Pokemon Charmander("Charmander", PokemonType::GRASS, 100);
    ProfessorOak professor_oak("Professor Oak");

    //Continue with main flow
    Player player("Ash", Pokemon("Pikachu",PokemonType::ELECTRIC,100));


    // Call greet and offer Pokémon choices
    professor_oak.greetPlayer(player);
    professor_oak.offerPokemonChoices(player);

    //Explain the main quest
    professor_oak.explainMainQuest(player);

    // Placeholder for where the game loop will start
    GameLoop(player);

    //// Concluding the first chapter
    //cout << "\n***************************************" << endl;
    //cout << "Professor Oak: " << player.choosenPokemon.name << " will be your faithful companion on this grand journey, " << player.name << "!" << endl;
    //cout << "Professor Oak: Now, your adventure begins!" << endl;
    //cout << "Professor Oak: The world of Pokémon awaits you with endless possibilities!" << endl;
    //cout << "***************************************\n" << endl;

    return 0;

    #include "Header.h";