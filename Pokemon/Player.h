#include <string>
using namespace std;

class Player
{
public:
	string name;
	Pokemon choosenPokemon;

	Player();

	Player(string p_name, Pokemon p_choosePokemon);
	void choosePokemon(int choice);


};

