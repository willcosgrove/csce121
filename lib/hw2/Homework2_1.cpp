/*
Will Cosgrove
121007913
will@willcosgrove.com
Section 509
1/31/2012
Homework 2, Problem 1
*/

#include "std_lib_facilities.h"

int main(){
  int min_thousand = 65;
  int min_million = 65;
  int min_billion = 65;
  int total = 0;
  int current_square=1;
  int last_square;
  for(int i = 0; i<64; i++){
    total += current_square;
    cout << "Current Square #: " << i+1 << "\n";
    cout << "Current Square: " << current_square << "\n";
    cout << "Total: " << total << "\n";
    last_square = current_square;
    current_square = last_square * 2;
    if(total > 1000 && (i+1) < min_thousand){
      min_thousand = i+1;
      cout << "Minimum Squares for 1000: " << min_thousand << "\n";
    }
    if(total > 1000000 && (i+1) < min_million){
      min_million = i+1;
      cout << "Minimum Squares for 1,000,000: " << min_million << "\n";
    }
    if(total > 1000000000 && (i+1) < min_billion){
      min_billion = i+1;
      cout << "Minimum Squares for 1,000,000,000: " << min_billion << "\n";
    }
    cout << "\n\n";
  }
  cout << "Minimum Squares for 1000: " << min_thousand << "\n";
  cout << "Minimum Squares for 1,000,000: " << min_million << "\n";
  cout << "Minimum Squares for 1,000,000,000: " << min_billion << "\n";
  return 0;
}
