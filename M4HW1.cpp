/*
CSC 134
M4HW1
Joseph Troop
10/30/2025
*/

#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user for a valid number between 1 and 12
    cout << "Enter a number from 1 to 12: ";
    cin >> number;

    // Keep asking until a valid number is entered
    while (number < 1 || number > 12) {
        cout << "Invalid input. Please enter a number from 1 to 12: ";
        cin >> number;
    }

    int i = 1;

    // Print the multiplication table
    while (i <= 12) {
        cout << number << " times " << i << " is " << (number * i) << "." << endl;
        ++i;
    }

    return 0;
}