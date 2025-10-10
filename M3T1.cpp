/*
CSC 134
M3T1
Joseph Troop
10/10/2025
*/

#include <iostream>
using namespace std;

int main() {
    //declare variables
    int widthOne, lengthOne, widthTwo, lengthTwo;
    int areaOne, areaTwo;

    //ask for input
    cout << "Please enter the width and height of the first" << endl;
    cout << "rectangle, seperated by a space or newline" << endl;
    cin >> widthOne >> lengthOne;

    cout << "Please enter the width and height of the second" << endl;
    cout << "rectangle, seperated by a space or newline" << endl;
    cin >> widthTwo >> lengthTwo;

    //calculate the area
    areaOne = widthOne * lengthOne;
    areaTwo = widthTwo * lengthTwo;

    //display results
    cout << "Rectangle one has an area of " << areaOne << endl;
    cout << "Rectangle two has an area of " << areaTwo << endl;

    return 0;
}