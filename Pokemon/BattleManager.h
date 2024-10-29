#pragma once
#include "Pokemon.h"
#include "Player.h"

class BattleManager
{
public:

	void startBattle(Player& playerPokemon,Pokemon& wildPokemon);
	void battle(Pokemon& playerPokemon, Pokemon& wildPokemon);
	void handleBattleOutcome(Player& playerPokemon, bool playerWon);

private:

};
