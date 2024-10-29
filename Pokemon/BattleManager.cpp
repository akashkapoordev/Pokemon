#include "BattleManager.h"
#include "Utility.h"
#include <iostream>

void BattleManager::startBattle(Player& playerPokemon, Pokemon& wildPokemon)
{
	cout << "Wild Pokemon Appeared : " << wildPokemon.name << endl;
	battle(playerPokemon.choosenPokemon, wildPokemon);
}

void BattleManager::battle(Pokemon& playerPokemon, Pokemon& wildPokemon)
{
    cout << "WildPokemon name : " << wildPokemon.name << endl;

    if (!playerPokemon.isFainted() && !wildPokemon.isFainted())
    {
        playerPokemon.attack(wildPokemon); //player turn
    }

    if (!wildPokemon.isFainted())
    {
        wildPokemon.attack(playerPokemon);
    }

    Utility::WaitForEnter();

    //handleBattleOutcome(playerPokemon, playerPokemon.isFainted());

 
}

void BattleManager::handleBattleOutcome(Player& playerPokemon, bool playerWon)
{
    if (playerWon) {
        std::cout << playerPokemon.choosenPokemon.name << " is victorious! Keep an eye on your Pokémon's health.\n";
    }
    else {
        std::cout << "Oh no! " << playerPokemon.choosenPokemon.name << " fainted! You need to visit the PokeCenter.\n";
        Utility::WaitForEnter();
        std::cout << "Game Over.\n";
    }
}



