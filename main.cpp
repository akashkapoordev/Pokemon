#include <iostream>
using namespace std;

int main()
{
    string player_name;
    string chosen_pokemon;

    // Professor introduction
    cout << "Professor Oak: Greetings, young trainer! Welcome to the world of Pok�mon!\n";
    cout << "Professor Oak: I'm Professor Oak, and it's my honor to guide you on this exciting adventure.\n";
    cout << "Professor Oak: But enough about me, let's get to know you a little better.\n";

    // Taking player name as input
    cout << "Professor Oak: First, what should I call you, trainer?\n";
    cin >> player_name;

    cout << "Professor Oak: Ah, " << player_name << "! A strong name for a future Pok�mon champion!\n";
    cout << "Professor Oak: Now, before you set off, you'll need a Pok�mon companion by your side.\n";

    // Presenting Pok�mon choices
    cout << "Professor Oak: I have three rare Pok�mon here with me. Choose the one that calls to your heart.\n";
    cout << "1. Charmander - The fire-type, full of spirit and determination.\n";
    cout << "2. Bulbasaur - The grass-type, calm yet powerful.\n";
    cout << "3. Squirtle - The water-type, cool and collected under pressure.\n";

    int choice;
    cout << "Professor Oak: So, which one will you choose? Enter the number of your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        chosen_pokemon = "Charmander";
        cout << "Professor Oak: You've chosen " << chosen_pokemon << "! A fiery partner with a burning passion!\n";
        break;
    case 2:
        chosen_pokemon = "Bulbasaur";
        cout << "Professor Oak: " << chosen_pokemon << " is your choice! A steady companion with deep roots.\n";
        break;
    case 3:
        chosen_pokemon = "Squirtle";
        cout << "Professor Oak: " << chosen_pokemon << ", a fine choice! Always calm under pressure.\n";
        break;
    default:
        cout << "Professor Oak: Hmm, it seems you've made an unusual choice... Let's go with a special one!\n";
        chosen_pokemon = "Pikachu";
        cout << "Professor Oak: Ah, " << chosen_pokemon << " joins you as a surprise companion! How electrifying!\n";
        break;
    }

    // Concluding the first chapter
    cout << "Professor Oak: " << chosen_pokemon << " will be your faithful companion on this grand journey, " << player_name << "!\n";
    cout << "Professor Oak: Now, your adventure begins! The world of Pok�mon awaits you with endless possibilities!\n";

    return 0;
}
