/*
CSC 134
M4T1
Joseph Troop
10/19/2025
*/

#include <iostream>
using namespace std;


int main()  
{
  //program 5-3
  int number = 5;
  
  int i = 0;
  while (i < number) 
  {
    cout << "Hello" << endl;
    i++;
  }
  cout << "That's all!" << endl;
  
  //program 5-6
  const int MIN_NUMBER = 1;
  const int MAX_NUMBER = 10;

  int num = MIN_NUMBER;

  cout << "Number\tNumber Squared" << endl;

  while (num <= MAX_NUMBER) 
  {

    cout << num << "\t\t" << num * num << endl;

    num++;
  }


}