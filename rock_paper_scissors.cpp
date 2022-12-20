/*
this program will implement a game of rock, paper, scissors
*/
#include <iostream>
// needed for random number
#include <stdlib.h>
#include <string>

int main() {

  // get a random choice for the computer
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  std::string computer_choice;
  switch (computer) {
    case 1:
      computer_choice = "Rock";
      break;
    case 2:
      computer_choice = "Paper";
      break;
    case 3:
      computer_choice = "Scissors";
      break;
    default:
      std::cout << "Something went wrong" << std::endl;
  }
  //user choice
  int user = 0;

  //prompt the user
  std::cout << "Let's play Rock, Paper, Scissors!" << std::endl;
  std::cout << "1 = Rock" <<std::endl;
  std::cout << "2 = Paper" <<std::endl;
  std::cout << "3 = Scissors" <<std::endl;

  std::cout << "Make a choice: ";
  std::cin >> user;

    //display computer choice
  std::cout << "Computer chose " << computer_choice << std::endl;

  std::string player_win = "You win!";
  std::string computer_win = "Computer wins!";
  std::string winner = "";
  // decide the winner
  if (user == computer) {
    winner = "It's a draw!";
  } else {
    switch (user) {
        case 1:
            winner = (computer == 3) ? player_win : computer_win;
            break;
        case 2:
            winner = (computer == 1) ? player_win : computer_win;
            break;
        case 3:
            winner = (computer == 2) ? player_win : computer_win;
            break;
        default: 
            winner = "Something went wrong";
    }
  }
  //display the winner
    std::cout << winner << std::endl; 
}