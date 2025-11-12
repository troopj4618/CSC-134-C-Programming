/*
CSC 134
M5HW1
Joseph Troop
11/12/2025
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

// Function prototypes
void question1(); // Average Rainfall
void question2(); // Volume of a Block
void question3(); // Roman Numerals
void question4(); // Geometry Calculator
void question5(); // Distance Traveled
void showMenu();  // Main Menu

int main() {
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            question1();
            break;
        case 2:
            question2();
            break;
        case 3:
            question3();
            break;
        case 4:
            question4();
            break;
        case 5:
            question5();
            break;
        case 6:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "The valid choices are 1 through 6. Please try again.\n";
        }

        cout << endl;

    } while (choice != 6);

    return 0;
}

// Question 1: Average Rainfall

void question1() {
    string month1, month2, month3;
    double rain1, rain2, rain3;

    cout << "Enter month: ";
    cin >> month1;
    cout << "Enter rainfall for " << month1 << ": ";
    cin >> rain1;

    cout << "Enter month: ";
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ": ";
    cin >> rain2;

    cout << "Enter month: ";
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ": ";
    cin >> rain3;

    double avg = (rain1 + rain2 + rain3) / 3.0;
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and "
         << month3 << " is " << avg << " inches." << endl;
}


// Question 2: Volume of a Block 

void question2() {
    double width, length, height;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter height: ";
    cin >> height;

    if (width <= 0 || length <= 0 || height <= 0) {
        cout << "Error: All sides must be greater than zero.\n";
        return;
    }

    double volume = width * length * height;
    cout << fixed << setprecision(2);
    cout << "The volume of the block is " << volume << "." << endl;
}

// Question 3: Roman Numeral Converter

void question3() {
    int number;
    cout << "Enter a number (1 - 10): ";
    cin >> number;

    if (number < 1 || number > 10) {
        cout << "Invalid input. Please enter a number between 1 and 10.\n";
        return;
    }

    cout << "The Roman numeral version of " << number << " is ";

    switch (number) {
    case 1: cout << "I"; break;
    case 2: cout << "II"; break;
    case 3: cout << "III"; break;
    case 4: cout << "IV"; break;
    case 5: cout << "V"; break;
    case 6: cout << "VI"; break;
    case 7: cout << "VII"; break;
    case 8: cout << "VIII"; break;
    case 9: cout << "IX"; break;
    case 10: cout << "X"; break;
    }

    cout << "." << endl;
}

// Question 4: Geometry Calculator

void question4() {
    int choice;
    const double PI = 3.14159;

    cout << "\nGeometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << fixed << setprecision(5);

    switch (choice) {
    case 1: {
        double radius;
        cout << "Enter the circle's radius: ";
        cin >> radius;
        if (radius < 0) {
            cout << "The radius cannot be less than zero.\n";
        } else {
            cout << "The area is " << PI * radius * radius << endl;
        }
        break;
    }
    case 2: {
        double length, width;
        cout << "Enter the rectangle's length: ";
        cin >> length;
        cout << "Enter the rectangle's width: ";
        cin >> width;
        if (length < 0 || width < 0) {
            cout << "The length and width cannot be less than zero.\n";
        } else {
            cout << "The area is " << length * width << endl;
        }
        break;
    }
    case 3: {
        double base, height;
        cout << "Enter the triangle's base: ";
        cin >> base;
        cout << "Enter the triangle's height: ";
        cin >> height;
        if (base < 0 || height < 0) {
            cout << "Only enter positive values for base and height.\n";
        } else {
            cout << "The area is " << base * height * 0.5 << endl;
        }
        break;
    }
    case 4:
        cout << "Returning to main menu.\n";
        break;
    default:
        cout << "The valid choices are 1 through 4. Run the program again and select one of those.\n";
    }
}

// Question 5: Distance Traveled

void question5() {
    double speed;
    int hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> hours;

    if (speed < 0 || hours < 1) {
        cout << "Error: Speed must be non-negative and hours must be at least 1.\n";
        return;
    }

    cout << "\nHour   Distance Traveled\n";
    cout << "--------------------------\n";

    for (int i = 1; i <= hours; ++i) {
        cout << setw(3) << i << " " << setw(10) << (speed * i) << endl;
    }
}

// Main Menu Display

void showMenu() {
    cout << "\n===== MAIN MENU =====\n";
    cout << "1. Average Rainfall\n";
    cout << "2. Volume of a Block\n";
    cout << "3. Roman Numeral Converter\n";
    cout << "4. Geometry Calculator\n";
    cout << "5. Distance Traveled\n";
    cout << "6. Exit\n";
    cout << "Enter your choice: ";
}
