#pragma once
#include <string>
#include <vector>
#include "Pokemon.h"
#include "PokemonType.h"
using namespace std;

struct Grass
{
	string environmentType;
	vector<Pokemon> wildPokemonList;
	int encounterRate;
};

