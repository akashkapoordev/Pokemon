#include <string>
using namespace std;

class Pokemon;

class Player
{
public:
	string name;
	Pokemon choosenPokemon;

	Player();

	Player(string p_name, Pokemon p_choosePokemon);
	void choosePokemon(int choice);


};

