/*
Will Cosgrove
121007913
will@willcosgrove.com
Section 509
1/31/2012
Homework 1, Problem 4
*/

#include <iostream>
#include <cmath>
#include "std_lib_facilities.h"
using namespace std;

int main(){
  double a,b,c,x1,x2;
  cout << "Enter a, b, and c\n";
  cin >> a >> b >> c;
  x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 *a);
  x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
  cout << "x1: " << x1 << endl;
  cout << "x2: " << x2 << endl;
  return 0;
}
