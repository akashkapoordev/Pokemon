#include <string>
#include "PokemonChoice.h"
#include "PokemonType.h"
#include "Utility.h"
using namespace std;

class Player
{
public:
	string name;
	//Pokemon choosenPokemon;

	Player();

	//Player(string p_name, Pokemon p_choosePokemon);
	void choosePokemon(int choice);


};

