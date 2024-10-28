#pragma once
#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

struct Grass
{
	string environmentType;
	vector<Pokemon> wildPokemon;
	int encounterRate;
};
