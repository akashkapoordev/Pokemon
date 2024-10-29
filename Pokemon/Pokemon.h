#pragma once
using namespace std;

enum class PokemonType;

class Pokemon
{
public:
    string name;
    PokemonType type;
    int health;
    int maxHealth = 100;

    //Default Constructor
    Pokemon();

    //Para Constructor
    Pokemon(string p_name, PokemonType p_type, int p_health);

    //copy Constructor
    Pokemon(const Pokemon& other);

    ~Pokemon();

    void TakeDamagae(int damage);
    bool isFainted() const;

    void attack(Pokemon& target);

    void Battle(Pokemon& playerPokemon, Pokemon& wildpokemon);
  

};

