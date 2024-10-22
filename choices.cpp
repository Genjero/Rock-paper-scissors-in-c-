#include "choices.hpp"
#include <iostream>
#include <random>

char getUserChoice() {
  char player{};
  // make sure player type r, p, or s other than that this gonna loop
  do {
    std::cout << "   Choose rock, paper, or scissors\n"
              << "======================================\n";
    std::cout << "press r for rock\n";
    std::cout << "press p for paper\n";
    std::cout << "press s for scissors\n";
    std::cin >> player;

  } while (player != 'r' && player != 'p' && player != 's');
  return player;
}

char getComp() {
  // get random number to pass to char
  std::random_device rd;
  std::mt19937 eng(rd());
  std::uniform_int_distribution<> d(1, 3);

  int compInpt = d(eng);
  // take random number 1 - 3 and return it to r, p, or s
  switch (compInpt) {
  case 1:
    return 'r';
  case 2:
    return 'p';
  case 3:
    return 's';
  }
  return 0;
}

void showChoice(char choice) {
  switch (choice) {
  case 'r':
    std::cout << "Rock\n";
    break;
  case 'p':
    std::cout << "Paper\n";
    break;
  case 's':
    std::cout << "Scissors\n";
    break;
  }
}
