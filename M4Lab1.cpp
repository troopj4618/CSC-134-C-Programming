/*
CSC 134
M4Lab1
Joseph Troop
10/24/2025
*/

#include <iostream>
using namespace std;

int main() {
    int width, height;

    cout << "Enter the width: ";
    cin >> width;
    cout << "Enter the height: ";
    cin >> height;

    cout << endl;

    // Show the width 
    cout << "Width (" << width << "): ";
    for (int i = 0; i < width; i++) {
        cout << "* ";
    }
    cout << endl;

    // Show the height 
    cout << "Height (" << height << "):" << endl;
    for (int i = 0; i < height; i++) {
        cout << "*\n";
    }

    cout << endl;

    // Print the final block
    cout << "Block (" << height << " x " << width << "):" << endl;
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}