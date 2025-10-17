/*
CSC 134
M3HW1 - Gold
Joseph Troop
10/17/2025
*/

#include <iostream> 
#include <iomanip>
#include <ctime>
#include <string>
using namespace std;

// Question 1: Simple chatbot
void chatbot() {
    cout << "Hello, I’m a C++ program!" << endl;
    cout << "Do you like me? Please type yes or no." << endl;

    string answer;
    cin >> answer;

    if (answer == "yes" || answer == "Yes" || answer == "YES") {
        cout << "That’s great! I’m sure we’ll get along." << endl;
    } 
    else if (answer == "no" || answer == "No" || answer == "NO") {
        cout << "Well, maybe you’ll learn to like me later." << endl;
    } 
    else {
        cout << "If you’re not sure… that’s OK." << endl;
    }
}

// Question 2: Receipt calculator
void receiptCalculator() {
    double price, taxRate = 0.07, tax, tip = 0, total;
    int dineOption;

    cout << "\nEnter the price of the meal: ";
    cin >> price;

    cout << "Please enter 1 if the order is dine in, 2 if it is to go: ";
    cin >> dineOption;

    tax = price * taxRate;

    if (dineOption == 1) {
        tip = price * 0.15;
    }

    total = price + tax + tip;

    cout << fixed << setprecision(2);
    cout << "\n----- Receipt -----" << endl;
    cout << "Meal: $" << price << endl;
    cout << "Tax:  $" << tax << endl;
    if (tip > 0) cout << "Tip:  $" << tip << endl;
    cout << "Total:$" << total << endl;
    cout << "-------------------" << endl;
}

// Question 3: Choose Your Own Adventure
void adventureGame() {
    string choice;

    cout << "\nYou are standing at the entrance of a dark cave." << endl;
    cout << "Do you want to ENTER or RUN? ";
    cin >> choice;

    if (choice == "ENTER" || choice == "enter") {
        cout << "You bravely enter the cave and see two tunnels." << endl;
        cout << "Do you go LEFT or RIGHT? ";
        cin >> choice;

        if (choice == "LEFT" || choice == "left") {
            cout << "Oh no! A dragon was waiting… GAME OVER!" << endl;
        } 
        else if (choice == "RIGHT" || choice == "right") {
            cout << "You found a chest of gold! YOU WIN!" << endl;
        } 
        else {
            cout << "You hesitated too long. The cave collapses. GAME OVER!" << endl;
        }
    } 
    else if (choice == "RUN" || choice == "run") {
        cout << "You ran away safely, but you gained nothing. GAME OVER!" << endl;
    }
    else {
        cout << "You stood still too long… GAME OVER!" << endl;
    }
}

// Question 4: Math practice
void mathPractice() {
    // current time in seconds
    long t = time(0);

    // use different modulus to generate numbers 0–9
    int num1 = (t % 10);
    int num2 = (t / 2 % 10);

    int userAnswer;
    cout << "\nWhat is " << num1 << " plus " << num2 << "?" << endl;
    cin >> userAnswer;

    if (userAnswer == num1 + num2) {
        cout << "Correct!" << endl;
    } 
    else {
        cout << "Incorrect. The answer was " << (num1 + num2) << "." << endl;
    }
}


int main() {
    chatbot();
    receiptCalculator();
    adventureGame();
    mathPractice();

    return 0;
}
