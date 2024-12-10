#pragma once

class Numbers
{

public:
	// returns int to determine player count
	int Start();

	// returns int to determine victor
	int Game(int playerCount);

private:
	int total1 = 0;
	int total2 = 0;
	int wager1 = 0;
	int wager2 = 0;
	int guess1 = 0;
	int guess2 = 0;

	int divisor;
	int calcResult;
};