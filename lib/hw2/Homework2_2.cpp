/*
Will Cosgrove
121007913
will@willcosgrove.com
Section 509
1/31/2012
Homework 2, Problem 2
*/

#include "std_lib_facilities.h"

void testInt(){
  int total = 0;
  int previous_total = 0;
  int current_square=1;
  int last_square;
  int highest_square;
  for(int i = 0; i<64; i++){
    previous_total = total;
    total += current_square;
    last_square = current_square;
    current_square = last_square * 2;
    highest_square = i+1;
    if(total < 0){
      total = previous_total;
      break;
    }
  }
  cout << "The largest square we can calculate with an int is #" << highest_square << "\n";
  cout << "That total is " << total << endl;
}

void testDouble(){
  double total = 0;
  double previous_total = 0;
  double current_square=1;
  double last_square;
  int highest_square;
  for(int i = 0; i<64; i++){
    previous_total = total;
    total += current_square;
    last_square = current_square;
    current_square = last_square * 2;
    highest_square = i+1;
    if(total < 0){
      total = previous_total;
      break;
    }

  }
  cout << "The largest square we can calculate with a double is #" << highest_square << "\n";
  cout << "That total is " << total << endl;
}

int main(){
  testInt();
  testDouble();
  return 0;
}
