/*
CSC 134
M2T2 receipt calculator
TroopJ 
9/24/25
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{

    // Declare variables
    string item = "🍔 Burger";
    double item_price = 12.99;
    double tax_percent = 0.08;
    double tax_amount;
    double total;
   
    // Greet user and take the order
    cout << "Welcome to our CSC 134 restraunt." << endl;
    cout << "You ordered one " << item << "." << endl;

    // Calculate meal price
    // calculate sales tax and total
    tax_amount = item_price * tax_percent;
    total = item_price + tax_amount;
    // print receipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us" << endl;
    cout << "______________________________" << endl;
    cout << item << "\t$" << item_price      << endl;
    cout << "Tax" << "\t\t$" << tax_amount   << endl;
    cout << "______________________________" << endl;
    cout << "total" << "\t\t$" << total << endl;
    cout << endl;

    return 0;
}