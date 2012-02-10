/*
Will Cosgrove
121007913
will@willcosgrove.com
Section 509
1/31/2012
Homework 1, Problem 3
*/

#include <iostream>
#include "std_lib_facilities.h"
using namespace std;
// Guesser class has an upper and lower bound,
// it can calculate a guess, and handles conversing
// with the user.
class Guesser {
  int upper_bound;
  int lower_bound;
  int guesses;
public:
  bool finished;
  Guesser(){
  upper_bound = 100;
  lower_bound = 1;
  guesses = 0;
  finished = false;
  }
  int guess(){
    return (upper_bound + lower_bound)/2;
  }
  void ask_question(){
    char answer;
    if(guesses <= 7){
      cout << "Is the number you are thinking of less than " << guess() << "? (y,n,[c]orrect)\n";
      guesses++;
      cin >> answer;
      if(answer == 'y'){
        upper_bound = guess();
      } else if(answer == 'n'){
        lower_bound = guess();
      } else if(answer == 'c'){
        cout << "I win.";
        finished = true;
      }
    } else {
      cout << "You're lying.";
      finished = true;
    }
  };
};

int main(){
  cout << "Think of a number between 1 and 100\n";
  Guesser g = Guesser(); // Initialize the Guesser
  while(!g.finished){ // While the Guesser is not finished
    g.ask_question(); // Ask the user questions
  }
  return 0;
}
