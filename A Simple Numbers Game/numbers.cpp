#include "numbers.h"
#include "calculations.h"
#include <iostream>

int Numbers::Start()
{
	std::cout << "Welcome to a simple numbers game!\n\n Do you want to play alone(1) or with a friend(2)?\n\n";
	int response;
	std::cin >> response;

	return (response == 1 || response == 2) ? response : Numbers::Start();
}