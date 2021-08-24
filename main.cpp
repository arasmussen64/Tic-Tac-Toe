#include <iostream>
#include "functions.hpp"
#include <vector>

std::vector<int> ttt_locations = {1, 2, 3, 4, 5, 6};
int player_choice = 0;
std::vector<int> player1_locations;
std::vector<int> player2_locations;
int squares = 7;

int main()
{
    //Greeting, getting players names and displaying a blank board
    greeting();
    player1();
    player2();
    blank_board();

    //Gameplay
    for (int i = 0; i > 0; i++) {
        p1_choice();
        if (p1_choice == 1) {
            
        }
    }
