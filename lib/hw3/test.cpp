#include "std_lib_facilities.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
  char num = '1';
  int number = num - 48;
  if(number == 1){
    cout << "Found it";
  } else {
    cout << "Not there\n";
    cout << number;
  }
  return 0;
}
