/*
Will Cosgrove
121007913
will@willcosgrove.com
Section 509
1/31/2012
Homework 1, Problem 2
*/

#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

// pluralize and you_have helper methods will DRY up the code a bit

// pluralize takes a count and a singular and plural version of a noun and outputs the correct form
string pluralize(int count, string singular, string plural){
  return count == 1 ? singular : plural;
}

// you_have takes a number of coins, and a noun and builds the output sentence
string you_have(int coins, string noun) {
  cout << "You have " << coins << " " << noun << ".\n";
}

int main(){
  int pennies, nickles, dimes, quarters, half_dollars, dollars;
  cout << "How many pennies do you have?\n";
  cin >> pennies;
  cout << "How many nickles do you have?\n";
  cin >> nickles;
  cout << "How many dimes do you have?\n";
  cin >> dimes;
  cout << "How many quarters do you have?\n";
  cin >> quarters;
  cout << "How many half dollars do you have?\n";
  cin >> half_dollars;
  cout << "How many dollar coins do you have?\n";
  cin >> dollars;
  if(pennies > 0){
    you_have(pennies, pluralize(pennies, "penny", "pennies"));
  }
  if(nickles > 0){
    you_have(nickles, pluralize(nickles, "nickle", "nickles"));
  }
  if(dimes > 0){
    you_have(dimes, pluralize(dimes, "dime", "dimes"));
  }
  if(quarters > 0){
    you_have(quarters, pluralize(quarters, "quarter", "quarters"));
  }
  if(half_dollars > 0){
    you_have(half_dollars, pluralize(half_dollars, "half dollar", "half dollars"));
  }
  if(dollars > 0){
    you_have(dollars, pluralize(dollars, "dollar", "dollars"));
  }
  float sum = (pennies*0.01) + (nickles*0.05) + (dimes*0.10) + (quarters*0.25) + (half_dollars*0.5) + dollars;
  cout << "The value of all your coins is $" << sum << ".";
  return 0;
}
