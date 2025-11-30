/*
CSC 134
M5HW1
Joseph Troop
11/30/2025
*/

#include <iostream>
using namespace std;

// Function prototypes
void part1();
void part2();

int main() {
    cout << "M6T1" << endl;

    part1();
    cout << "\n---------------------------\n";
    part2();

    return 0;
}

// PART 1 
// Loop, no arrays
void part1() {
    cout << "\nPART 1: Loop without arrays\n";

    const int DAYS = 5;
    string names[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    int total = 0;

    for (int i = 0; i < DAYS; i++) {
        int cars;
        cout << "Enter number of cars for " << names[i] << ": ";
        cin >> cars;

        total += cars;
    }

    double avg = total / 5.0;

    cout << "\nTotal cars for the week: " << total << endl;
    cout << "Average cars per day: " << avg << endl;
}

// ---------------- PART 2 --------------------
// Loop WITH arrays + ASCII bar graph
void part2() {
    cout << "\nPART 2: Loop with arrays\n";

    const int DAYS = 5;
    string names[DAYS] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    int cars[DAYS];

    int total = 0;

    // Input loop (store each day's count)
    for (int i = 0; i < DAYS; i++) {
        cout << "Enter number of cars for " << names[i] << ": ";
        cin >> cars[i];
        total += cars[i];
    }

    double avg = total / 5.0;

    cout << "\nTotal cars for the week: " << total << endl;
    cout << "Average cars per day: " << avg << endl;

    // Show full week’s data
    cout << "\nDaily values:\n";
    for (int i = 0; i < DAYS; i++) {
        cout << names[i] << ": " << cars[i] << endl;
    }

    // ASCII bar chart
    cout << "\nASCII Bar Graph (scaled: # = 10 cars)\n";
    for (int i = 0; i < DAYS; i++) {
        cout << names[i] << " | ";

        int barLength = cars[i] / 10;  // scale down
        for (int j = 0; j < barLength; j++) {
            cout << "#";
        }

        cout << " (" << cars[i] << ")\n";
    }
}
