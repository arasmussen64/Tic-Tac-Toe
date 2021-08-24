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

//Different placements of O

void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  O   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   O   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  O\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  O  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  \n";
    std::cout << " _________________\n";
    std::cout << "  4  |    O  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   O\n";
    std::cout << "     |       |\n";
}

void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  O   |   O   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  O   |   2   |  O\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  O   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  O  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  O   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    O  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  O   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   O\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   O   |  O\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   O   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  O  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   O   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    O  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   O   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   O\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  O\n";
    std::cout << " _________________\n";
    std::cout << "  O  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  O\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    O  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  O\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   O\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  O  |    O  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  O  |    5  |   O\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    O  |   O\n";
    std::cout << "     |       |\n";
}

//Different placements of X
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  X   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   X   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  X\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  X  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  \n";
    std::cout << " _________________\n";
    std::cout << "  4  |    X  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   X\n";
    std::cout << "     |       |\n";
}

void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  X   |   X   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  X   |   2   |  X\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  X   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  X  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  X   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    X  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  X   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   X\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   X   |  X\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   X   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  X  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   X   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    X  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   X   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   X\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  X\n";
    std::cout << " _________________\n";
    std::cout << "  X  |    5  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  X\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    X  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  X\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    5  |   X\n";
    std::cout << "     |       |\n";
}

void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  X  |    X  |   6\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  X  |    5  |   X\n";
    std::cout << "     |       |\n";
}
void blank_board()
{
    std::cout << "      |       |\n";
    std::cout << "  1   |   2   |  3\n";
    std::cout << " _________________\n";
    std::cout << "  4  |    X  |   X\n";
    std::cout << "     |       |\n";
}

//Different placements of X and O
