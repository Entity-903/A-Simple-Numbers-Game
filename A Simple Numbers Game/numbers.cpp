#include "numbers.h"

int Numbers::Start()
{
	std::cout << "\nWelcome to a simple numbers game!\n\n Do you want to play alone(1) or with a friend(2)?\n\n";
	std::cin >> response;

	int playerCount = 0;
	try
	{
		playerCount = std::stoi(response);
	}
	catch(std::exception)
	{
		std::cout << "\n\nFuck you dumbass!";
	};

	return (playerCount == 1 || playerCount == 2) ? playerCount : Numbers::Start();
}

int Numbers::Setup()
{
	std::cout << "\n\nHow many points should everyone have to start?\n\n";
	std::cin >> startTotal;
	std::cout << "Everyone will start with " << startTotal << " points";
	return (startTotal != 0) ? startTotal : Numbers::Setup();
}

int Numbers::Game(int playerCount)
{
	startTotal = Numbers::Setup();
	if (playerCount == 1)
	// playing against the computer
	{

	}
	else
	// playing against another person
	{

	}
	std::cout << "\n\nThe game has yet to be implemented!";
	return 0;
}
