#include <iostream>
#include "Pokemon.h"
#include "PokemonType.h"
using namespace std;

//Default Constructor
Pokemon::Pokemon() {
    name = "unknow";
    type = PokemonType::GRASS;
    health = 60;

}

//Para Constructor
Pokemon::Pokemon(string p_name, PokemonType p_type, int p_health)
{
    name = p_name;
    type = p_type;
    health = p_health;

}

//copy Constructor
Pokemon::Pokemon(const Pokemon& other)
{
    name = other.name;
    type = other.type;
    health = other.health;

}

Pokemon::~Pokemon() {

}

void Pokemon::TakeDamagae(int damage)
{
    health = health - damage;
    if (health < 0)
    {
        health = 0;
    }
}

bool Pokemon::isFainted() const
{
    return health <= 0;
}

void Pokemon:: attack(Pokemon& target)
{
    int damage = 10;
    cout << name << " attacks " << target.name << " for " << damage << " damage!\\n";
    target.TakeDamagae(damage);
}

void Pokemon::Battle(Pokemon& playerPokemon, Pokemon& wildpokemon)
{
    cout << "WildPokemon name : " << wildpokemon.name << endl;

    if (!playerPokemon.isFainted() && !wildpokemon.isFainted())
    {
        playerPokemon.attack(wildpokemon); //player turn
    }

    if (!wildpokemon.isFainted())
    {
        wildpokemon.attack(playerPokemon);
    }

    if (playerPokemon.isFainted())
    {
        cout << playerPokemon.name << " has fainted! You lose the battle.\\n";
    }
    else
    {
        cout << "You defeated the wild " << wildpokemon.name << "!\\n";
    }
}
