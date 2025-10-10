/*
CSC 134
M3Lab2
Joseph Troop
10/10/2025
*/

#include <iostream>
using namespace std;

int main() {
    int grade;

    // Prompt the user to enter a numerical grade
    cout << "Enter a numerical grade (0 - 100): ";
    cin >> grade;

    // Check ranges and determine the letter grade
    if (grade >= 90 && grade <= 100) {
        cout << "Letter Grade: A" << endl;
    } 
    else if (grade >= 80 && grade <= 89) {
        cout << "Letter Grade: B" << endl;
    } 
    else if (grade >= 70 && grade <= 79) {
        cout << "Letter Grade: C" << endl;
    } 
    else if (grade >= 60 && grade <= 69) {
        cout << "Letter Grade: D" << endl;
    } 
    else if (grade >= 0 && grade <= 59) {
        cout << "Letter Grade: F" << endl;
    } 
    else {
        cout << "Invalid grade. Please enter a value between 0 and 100." << endl;
    }

    return 0;
}