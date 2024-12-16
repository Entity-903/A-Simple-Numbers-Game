#pragma once
#include "calculations.h"
#include <string>
#include <iostream>

class Numbers
{

public:
	// returns int to determine player count
	int Start();

	// returns starting points for all players
	int Setup();

	// returns int to determine victor
	int Game(int playerCount);

private:
	int total1;
	int total2;
	int wager1;
	int wager2;
	int guess1;
	int guess2;

	int startTotal;
	int divisor;
	int calcResult;

	std::string response;
};