#include <iostream>
#include <string>
using namespace std;

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

    Pokemon() {}
    Pokemon(string p_name, PokemonType p_type, int p_health)
    {
        name = p_name;
        type = p_type;
        health = p_health;
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

        cout << "\n*** " << name << " has chosen " << choosenPokemon.name << "! ***\n" << endl;
    }
};

class ProfessorOak
{
public:
    string name;

    void greetPlayer(Player& player)
    {
        // Professor introduction with visual spacing and formatting
        cout << "\n***************************************" << endl;
        cout << name << ": Greetings, young trainer!" << endl;
        cout << name << ": Welcome to the world of Pokémon!" << endl;
        cout << name << ": I'm Professor Oak, and it's my honor to guide you on this exciting adventure." << endl;
        cout << name << ": But enough about me, let's get to know you a little better." << endl;
        cout << "***************************************\n" << endl;
    }

    void offerPokemonChoices(Player& player)
    {
        // Taking player name as input
        cout << name << ": First, what should I call you, trainer?\n";
        std::getline(cin, player.name);

        cout << "\n" << name << ": Ah, " << player.name << "! A strong name for a future Pokémon champion!" << endl;
        cout << name << ": Now, before you set off, you'll need a Pokémon companion by your side." << endl;

        // Presenting Pokémon choices with better formatting
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << name << ": I have three rare Pokémon here with me." << endl;
        cout << "Choose the one that calls to your heart!" << endl;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "1. Charmander - The fire-type, full of spirit and determination." << endl;
        cout << "2. Bulbasaur - The grass-type, calm yet powerful." << endl;
        cout << "3. Squirtle - The water-type, cool and collected under pressure." << endl;

        int choice;
        cout << "\n" << name << ": So, which one will you choose? Enter the number of your choice: ";
        cin >> choice;
        player.choosePokemon(choice);
    }
};

int main()
{
    Player player;
    ProfessorOak professor_oak;
    Pokemon pokemon_placeholder;

    //Assign PokemonPlaceholder
    pokemon_placeholder.name = "Pikachu";
    pokemon_placeholder.type = PokemonType::ELECTRIC;
    pokemon_placeholder.health = 100;
    // Assign Professor name
    professor_oak.name = "Professor Oak";

    // Call greet and offer Pokémon choices
    professor_oak.greetPlayer(player);
    professor_oak.offerPokemonChoices(player);

    // Concluding the first chapter
    cout << "\n***************************************" << endl;
    cout << "Professor Oak: " << player.choosenPokemon.name << " will be your faithful companion on this grand journey, " << player.name << "!" << endl;
    cout << "Professor Oak: Now, your adventure begins!" << endl;
    cout << "Professor Oak: The world of Pokémon awaits you with endless possibilities!" << endl;
    cout << "***************************************\n" << endl;

    return 0;
}
