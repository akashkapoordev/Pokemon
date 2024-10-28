// Player.cpp
#include "Player.h"
#include "iostream"
#include "PokemonChoice.h"
#include "PokemonType.h"
#include "Utility.h"
using namespace std;

Player::Player() {
    name = "Trainer";
    choosenPokemon = Pokemon(); // Using the default Pokemon constructor
}

Player::Player(string p_name, Pokemon p_chosenPokemon) {
    name = p_name;
    choosenPokemon = p_chosenPokemon;
}

void Player::choosePokemon(int choice) {
    switch ((PokemonChoice)choice) {
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
    cout << "Player " << name << " chose " << choosenPokemon.name << "!\n";
    Utility::WaitForEnter(); 
}