/*
CSC 134
M2HW - Gold
Joseph Troop
10/3/2025
*/

#include <iostream>
using namespace std;

int main() {
    /* I know this isn't the best way to organize 
       but I thought this would work well enough
    */
   
    int choice;
    cout << "Select a program to run:\n";
    cout << "1. Banking Transactions\n";
    cout << "2. Crate Storage Cost\n";
    cout << "3. Pizza Party Leftovers\n";
    cout << "4. Cheer Program\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    if (choice == 1) {
        // Banking Transactions
        string name;
        double start, deposit, withdraw, finalBalance;
        int accountNumber = 123456;

        cout << "Enter your name: ";
        cin >> name;
        cout << "Starting balance: ";
        cin >> start;
        cout << "Deposit amount: ";
        cin >> deposit;
        cout << "Withdrawal amount: ";
        cin >> withdraw;

        finalBalance = start + deposit - withdraw;

        cout << "\nName: " << name << endl;
        cout << "Account number: " << accountNumber << endl;
        cout << "Final balance: $" << finalBalance << endl;
    }

    else if (choice == 2) {
        // Crate Storage Cost
        double length, width, height, volume, cost, charge, profit;

        cout << "Length: ";
        cin >> length;
        cout << "Width: ";
        cin >> width;
        cout << "Height: ";
        cin >> height;

        volume = length * width * height;
        cost = volume * 0.30;
        charge = volume * 0.52;
        profit = charge - cost;

        cout << "\nVolume: " << volume << " cubic ft" << endl;
        cout << "Cost: $" << cost << endl;
        cout << "Charge: $" << charge << endl;
        cout << "Profit: $" << profit << endl;
    }

    else if (choice == 3) {
        // Pizza Party Leftovers
        int pizzas, slicesPerPizza, visitors, leftover;

        cout << "How many pizzas? ";
        cin >> pizzas;
        cout << "How many slices per pizza? ";
        cin >> slicesPerPizza;
        cout << "How many visitors? ";
        cin >> visitors;

        leftover = (pizzas * slicesPerPizza) - (visitors * 3);
        cout << "\nLeftover slices: " << leftover << endl;
    }

    else if (choice == 4) {
        // Cheer Program
        string school = "FTCC";
        string team = "Trojans";

        cout << "Let's go " << school << endl;
        cout << "Let's go " << school << endl;
        cout << "Let's go " << school << endl;
        cout << "Let's go " << team << endl;
    }

    else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}