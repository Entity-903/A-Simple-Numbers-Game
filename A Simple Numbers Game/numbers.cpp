#include "numbers.h"
#include "calculations.h"
#include <iostream>

int Numbers::Start()
{
	std::cout << "\nWelcome to a simple numbers game!\n\n Do you want to play alone(1) or with a friend(2)?\n\n";
	int response;
	std::cin >> response;

	return (response == 1 || response == 2) ? response : Numbers::Start();
}

int Numbers::Game(int playerCount)
{
	if (playerCount == 1)
	// playing against the computer
	{

	}
	else
	// playing against another person
	{

	}
	std::cout << "\nThe game has yet to be implemented!";
	return 0;
}
