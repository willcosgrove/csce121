/*
Will Cosgrove
121007913
will@willcosgrove.com
Section 509
1/31/2012
Homework 2, Problem 3
*/

#include "std_lib_facilities.h"

void getPrimes(int upperBound) {
  int upperBoundSquareRoot = (int)sqrt((double)upperBound); // only check from 2..sqrt(n)
  bool *isNotPrime = new bool[upperBound + 1]; // Set up an array of booleans
  for (int m = 2; m <= upperBoundSquareRoot; m++) {
    if (!isNotPrime[m]) {
      cout << m << " ";
      for (int k = m * m; k <= upperBound; k += m)
        isNotPrime[k] = true; // All multiples are not going to be primes, obviously
    }
  }
  for (int m = upperBoundSquareRoot; m <= upperBound; m++)
    if (!isNotPrime[m])
      cout << m << " ";  // All that remain "unmarked" are primes
}

int main(){
  getPrimes(100);
  return 0;
}
