#include <iostream>

void greeting()
{
    std::cout << "**********************\n";
    std::cout << "Welcome to Tic-Tac-Toe\n";
    std::cout << "**********************\n";
}

std::string player1()
{
    std::string player1;
    std::cout << "Player 1 input your name: ";
    std::cin >> player1;
    return player1;
}

std::string player2()
{
    std::string player2;
    std::cout << "Player2 input your name: ";
    std::cin >> player2;
    return player2;
}

//Player 1 make a choice
int p1_choice()
{
    int player_choice;
    std::cout << "Player 1 please choose from the available squares.\n";
    std::cin >> player_choice;

    return player_choice;
}
//Player 2 make a choice
/*int p2_choice() {
  int player_choice = 0;
  std::cout << "Player 2 please choose from the available squares.\n";
  std::cin >> player_choice;

  return player_choice;
}*/

//gameboards
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
