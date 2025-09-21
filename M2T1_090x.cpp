// CSC 134
// Joseph Troop
// 9/21/25

#include <iostream>
using namespace std;

int main() {

    string first_name, last_name, full_name;
    string product = "potatoes";
    double cost_each = 1.50;
    double total_cost;

    // greet customer
    cout << "Welcome to the " << product << " store" << endl;
    cout << "What's your first name?";
    cin >> first_name;
    cout << "What's your last name?";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;
}