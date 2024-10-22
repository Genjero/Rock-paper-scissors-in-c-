#include "choices.hpp"
#include "game.hpp"
#include <iostream>

// Foerward declaration
void start();
char getComp();
char getUserChoice();
void showChoice(char);
void winner(char, char);

int main(int argc, char *argv[]) {

  start();
  // make player choose
  char player{getUserChoice()};
  std::cout << "you choose     : ";
  showChoice(player);

  // make computer choose
  char computer{getComp()};
  std::cout << "computer choose: ";
  showChoice(computer);

  // print who is win
  winner(player, computer);

  return 0;
}
