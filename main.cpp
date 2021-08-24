#include <iostream>
#include "functions.hpp"
#include <vector>

std::vector<int> ttt_locations = {1, 2, 3, 4, 5, 6};
int player_choice = 0;
std::vector<int> player1_locations;
std::vector<int> player2_locations;
int turns = 0;

int main()
{
    //Greeting, getting players names and displaying a blank board
    greeting();
    player1();
    player2();
    blank_board();

    //Gameplay
    while (turns < 7)
    {
        p1_choice();
        if (player_choice == 1)
        {
            player1_locations.push_back(1);
        }
    }
}