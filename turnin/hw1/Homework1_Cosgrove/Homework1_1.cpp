/*
Will Cosgrove
121007913
will@willcosgrove.com
Section 509
1/31/2012
Homework 1, Problem 1
*/

#include <iostream>
#include "std_lib_facilities.h"
using namespace std;

int main(){
  string str1, str2, str3;
  cout << "Enter 3 words\n";
  cin >> str1;
  cin >> str2;
  cin >> str3;
  // A couple if statements to decide the order
  if(str1 < str2 && str1 < str3){
    cout << str1 << ", ";
    if(str2 < str3){
      cout << str2 << ", " << str3;
    } else {
      cout << str3 << ", " << str2;
    }
  } else if(str1 > str2 && str1 < str3){
    cout << str2 << ", " << str1 << ", " << str3;
  } else if(str1 < str2 && str1 > str3){
    cout << str3 << ", " << str1 << ", " << str2;
  } else {
    cout << str3 << ", " << str2 << ", " << str1;
  }
  return 0;
}
