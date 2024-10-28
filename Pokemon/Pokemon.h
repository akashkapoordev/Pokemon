#pragma once
using namespace std;

enum class PokemonType;

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;

    //Default Constructor
    Pokemon();

    //Para Constructor
    Pokemon(string p_name, PokemonType p_type, int p_health);

    //copy Constructor
    Pokemon(const Pokemon& other);

    ~Pokemon();

    void attack();
  

};

