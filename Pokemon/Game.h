#pragma once
#include "grass.h"
#include "Player.h"

class Game
{
public:
	Game();
	
	void Gameloop(Player& player);

private:
	Grass forestGrass;
};
