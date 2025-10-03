// CSC 134
// Joseph Troop
// M2lab
// 10/3/2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double COST_PER_CUBIT_FOOT = 0.23;
    const double CHARGE_PER_CUBIT_FOOT = 0.5;
    
    double length, width, height, volume, cost, charge, profit;

    cout << setprecision(0) << fixed;

    cout << "Enter the Dimensions of the crate (in feet):\n";
    cout << length;
    cin >> length;
    cout << width;
    cin >> width;
    cout << height;
    cin >> height;

    volume = length * width * height;
    cost = volume * COST_PER_CUBIT_FOOT;
    charge = volume * CHARGE_PER_CUBIT_FOOT;
    profit = charge - cost;

    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
    cout << "Cost to build: $" << cost << endl;
    cout << "Charge to customer: $" << charge << endl;
    cout << "Profit: $" << profit << endl;
    return 0;

}