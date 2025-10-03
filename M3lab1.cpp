// CSC 134
// M3lab 1 using example 3
// Joseph Troop
// 10/3/2025

#include <iostream>
using namespace std;

void chooseOption1();
void chooseOption2();
void chooseOption3();

int main(){
int choice;
// ask question
cout << "Which option will you choose?" << endl;
cout << "Type 1-3: ";
cin >> choice;
if (1 == choice) {
    chooseOption1();
  }
  else if (2 == choice) {
    chooseOption2();
  }
  else if (3 == choice) {
    chooseOption3();
  }
  else {
    cout << "I'm sorry, that is not a valid choice." << endl;
  }

  cout << "Thank you for playing!" << endl;
  return 0;
}
void chooseOption1() {
  // this function is called if the user chooses 1
  cout << "You chose Option 1" << endl;
  cout << "You win $20,000" << endl;
}

void chooseOption2() {
  // this function is called if the user chooses 2
  cout << "You chose Option 2" << endl;
  cout << "You lost but you'll get to play again tomorrow." << endl;
}
void chooseOption3() {
  // this function is called if the user chooses 3
  cout << "You chose Option 3" << endl;
  cout << "You won a all expenses paid vacation to Hawaii!!!!!" << endl;
}
