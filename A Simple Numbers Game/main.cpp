// A Simple Numbers Game.cpp : This file contains the 'main' function. Program execution begins and ends there. 
// File renamed to "main"
//

#include <iostream>
#include "numbers.h"

int main()
{
    Numbers game;
    int players;
    bool finish = false;
    while (finish == false)
    {
        // How do I get cin to not have a seizure when a non-numeric value is given for an int variable?
        players = game.Numbers::Start();  
        if (players == 1)
        {
            std::cout << "\nNeat!"; 
            std::cout << "\n\nThe computer accepts the challenge!";
            int victor = game.Numbers::Game(players);
            //std::cout << "Player " << victor << " is the winner!";
            finish = true;
        }
        else
        {
            std::cout << "\nToo bad!"; 
            finish = true;
        }

    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
