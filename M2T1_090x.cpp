// CSC 134
// Joseph Troop
// 9/21/25

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string first_name, last_name, full_name;
    string product = "potatoes";
    int amount_purchased;
    double cost_each = 1.99;
    double total_cost;

    // greet customer
    cout << "Welcome to the " << product << " store" << endl;
    cout << "What's your first name?";
    cin >> first_name;
    cout << "What's your last name?";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;
    // ask how much they want to purchase
    cout << "How many " << product << " would you like today?";
    cin >> amount_purchased;

    // calculate total price
    total_cost = amount_purchased * cost_each;
    
    //format all prices to 2 decimals
    cout << setprecision(2) << fixed;
    
    //give the result
    cout << "For " + amount_purchased << " " << product << endl;
    cout << "That will be $" << total_cost << endl;
    cout << "Thank you for shopping with us" << endl;
}