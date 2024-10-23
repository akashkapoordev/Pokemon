#include <iostream>
using namespace std;

enum  class PokemonChoice {
    Charmander,
    Bulbasaur,
    Squirtle,
    Pikachu,
    InvalidChoice
};

int main()
{
    PokemonChoice chosen_pokemon = PokemonChoice::InvalidChoice;
    string player_name;
    string chosen_pokemon;

    // Professor introduction
    cout << "Professor Oak: Greetings, young trainer! Welcome to the world of Pokémon!\n";
    cout << "Professor Oak: I'm Professor Oak, and it's my honor to guide you on this exciting adventure.\n";
    cout << "Professor Oak: But enough about me, let's get to know you a little better.\n";

    // Taking player name as input
    cout << "Professor Oak: First, what should I call you, trainer?\n";
    cin >> player_name;

    cout << "Professor Oak: Ah, " << player_name << "! A strong name for a future Pokémon champion!\n";
    cout << "Professor Oak: Now, before you set off, you'll need a Pokémon companion by your side.\n";

    // Presenting Pokémon choices
    cout << "Professor Oak: I have three rare Pokémon here with me. Choose the one that calls to your heart.\n";
    cout << "1. Charmander - The fire-type, full of spirit and determination.\n";
    cout << "2. Bulbasaur - The grass-type, calm yet powerful.\n";
    cout << "3. Squirtle - The water-type, cool and collected under pressure.\n";

    int choice;
    cout << "Professor Oak: So, which one will you choose? Enter the number of your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        chosen_pokemon = PokemonChoice::Charmander;
        break;
    case 2:
        chosen_pokemon = PokemonChoice::Bulbasaur;
        break;
    case 3:
        chosen_pokemon = PokemonChoice::Squirtle;
        break;
    default:
        chosen_pokemon = PokemonChoice::InvalidChoice;
        break;
    }

    //Response from the choice
    switch (chosen_pokemon)
    {
    case PokemonChoice::Charmander:
        cout << "Professor Oak: You've chosen Charmander! A fiery partner with a burning passion!\n";
        break;
    case PokemonChoice::Bulbasaur:
        cout << "Professor Oak: Bulbasaur  is your choice! A steady companion with deep roots.\n";
        break;
    case PokemonChoice::Squirtle:
        cout << "Professor Oak: Squirtle, a fine choice! Always calm under pressure.\n";
        break;
    default:
        cout << "Professor Oak: Hmm, it seems you've made an unusual choice... Let's go with a special one!\n";
        chosen_pokemon = PokemonChoice::Pikachu;
        cout << "Professor Oak: Ah, Pikachu joins you as a surprise companion! How electrifying!\n";
        break;

    // Concluding the first chapter
    cout << "Professor Oak: " << (chosen_pokemon == PokemonChoice::Charmander? "Charmander" : chosen_pokemon == PokemonChoice::Bulbasaur ? "Bulbasaur" : chosen_pokemon == PokemonChoice::Squirtle ? "Squirtle" : chosen_pokemon == PokemonChoice::Pikachu ? "Pikachu" : "Invalid Choice") << " will be your faithful companion on this grand journey, " << player_name << "!\n";
    cout << "Professor Oak: Now, your adventure begins! The world of Pokémon awaits you with endless possibilities!\n";

    return 0;
}
