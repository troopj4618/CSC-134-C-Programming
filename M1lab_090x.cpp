// csc 134
// M1LAB
// Joseph Troop
// 9/10/2025

#include <iostream>
using namespace std;

int main() {
    
    string name = "Jane Smith";
    int apples = 100;
    double pricePerApple = 0.25;

    cout << "Welcome to " << name;
    cout << "'s apple farm" << endl;

    cout << "We have " << apples << " apples for sale" << endl;

    cout << "Price is $" << pricePerApple << " each" << endl;


    double totalPrice = (double) apples + pricePerApple;
    cout << "The total price is: $" << totalPrice  << endl;
}