/*
Will Cosgrove
121007913
will@willcosgrove.com
Section 509
2/14/2012
Homework 3, Problem 1
*/

#include "std_lib_facilities.h"

class Gamemaster {
  int guesses;
public:
  bool solved;
  vector<int> numbers;
  Gamemaster(){
    pick_numbers();
    guesses = 0;
    solved = false;
  }

  void pick_numbers(){
    for(int i = 0; i < 4; i++){
      numbers.push_back(rand() % 10);
    }
  }

  void check(string guess){
    guesses++;
    int bulls = 0;
    int kine = 0;
    for(int i = 0; i < 4; i++){
      int current_number = guess[i] - 48;
      if(numbers[i] == current_number){
        bulls++;
      } else if(find(numbers.begin(), numbers.end(), current_number) != numbers.end()){
        kine++;
      }
    }
    if(bulls == 4){
      solved = true;
      cout << "You solved it!  And in only " << guesses << " guesses!  What a pro.\n";
    } else {
      cout << bulls << " bulls " << kine << " kine\n";
    }
  }
};

int main(){
  string guess;
  Gamemaster g = Gamemaster(); // Initialize the Gamemaster
  while(!g.solved){ // While the game is not solved
    cout << "Make a guess\n";
    cin >> guess;
    g.check(guess); // Check for bulls and kine
  }
  return 0;
}