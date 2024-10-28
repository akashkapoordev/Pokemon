#include "Pokemon.h"
#include <iostream>
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

void Pokemon:: attack()
{
    cout << name << " attacks with a powerful move!\n";
}