/*
CSC 134
M5T2
Joseph Troop
11/7/2025
*/

#include <iostream>
#include <iomanip>  // For setw
using namespace std;

// Function that takes an integer and returns its square
int square(int num) {
    return num * num;
}

// Void function to print a line of the answer
void printAnswerLine(int num, int sq) {
    cout << setw(6) << num << setw(8) << sq << endl;
}

int main() {
    // Print table header
    cout << setw(6) << "Number" << setw(8) << "Square" << endl;
    cout << "----------------" << endl;

    // Loop through numbers 1 to 10
    for (int i = 1; i <= 10; i++) {
        int sq = square(i);       // Call the value-returning function
        printAnswerLine(i, sq);   // Call the void function
    }
    return 0;
}
