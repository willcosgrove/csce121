#include <iostream>
#include "../std_lib_facilities.h"

using namespace std;

int main()
{
  string name, friend_name, pronoun;
  char gender;
  int age;
  
  cout << "Enter your first name:\n";
  cin >> name;
  cout << "Enter the name of your friend:\n";
  cin >> friend_name;
  cout << "What is your friend's gender?\n";
  cin >> gender;
  if(gender == 'm'){
    pronoun = "him";
  } else {
    pronoun = "her";
  }
  cout << "What is your friend's age?\n";
  cin >> age;
  if(age <= 0 || age >= 110){
    simple_error("You're kidding!");
  }
  cout << "Dear " << name << ",\n";
  cout << "\tHow are you?  I am fine.  I miss you.  ";
  cout << "Have you seen " << friend_name << " recently?  ";
  cout << "If you see " << friend_name << " tell " << pronoun << " to call me.  ";
  cout << "I heard you just had a birthday and you're " << age << " years old now.  ";
  if(age < 12){
    cout << "Next year you will be " << (age + 1) << ".  ";
  } else if(age == 17){
    cout << "Next year you will be able to vote.  ";
  } else if(age > 70){
    cout << "I hope you are enjoying retirement.  ";
  }
  cout << "\nYours sincerely,\n\n" << name << " ";
  return 0;
}
