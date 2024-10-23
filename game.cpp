#include "game.hpp"

#include <iostream>
void winner(char player, char computer) {
  switch (player) {
  case 'r':
    if (computer == 'r') {
      std::cout << "It's a tie\n";
    } else if (computer == 'p') {
      std::cout << "You Lose!\n";
    } else {
      std::cout << "You Win!\n";
    }
    break;
  case 'p':
    if (computer == 'r') {
      std::cout << "You Win!\n";
    } else if (computer == 'p') {
      std::cout << "It's a tie\n";
    } else {
      std::cout << "You Lose!\n";
    }
    break;
  case 's':
    if (computer == 'r') {
      std::cout << "You Lose\n";
    } else if (computer == 'p') {
      std::cout << "You Win!\n";
    } else {
      std::cout << "It's a tie\n";
    }
    break;
  }
}

void start() {

  // Ask for play or not
  char play{};
  do {
    std::cout << "******************************************\n\n"
              << "Welcome to Rock, Paper,and scissors game\n\n"
              << "Press y to start or q to quit " << "\n\n"
              << "******************************************\n";
    std::cin >> play;

    if (play == 'q' || play == 'Q') {
      std::cout << "K bye\n";
      exit(EXIT_FAILURE);
    }
    std::cout << "\nRock, paper, scissors game is Start!\n";

  } while (play != 'y' && play != 'Y');
}

bool restartGame() {
  char response{};
  bool play{false};
  do {
    std::cout << "\nDo you want to play again? (y/n)";
    std::cin >> response;

    // if (response == 'n' || response == 'N') {
    //
    //   std::cout << "K bye\n";
    //   exit(EXIT_FAILURE);
    // }

  } while (response != 'y' && response != 'Y' && response != 'n' &&
           response != 'N');
  if (response == 'y' || response == 'Y') {
    play = true;
  }

  return play;
}
