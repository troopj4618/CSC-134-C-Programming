/*
CSC 134
M5LAB1
Joseph Troop
11/9/2025
*/

#include <iostream>
using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    // This program calculates the area of a rectangle.

    double length,    // The rectangle's length
           width,     // The rectangle's width
           area;      // The rectangle's area
          
    // Get the rectangle's length.
    length = getLength();
   
    // Get the rectangle's width.
    width = getWidth();
   
    // Get the rectangle's area.
    area = getArea(length, width);
   
    // Display the rectangle's data.
    displayData(length, width, area);
          
    return 0;
}

// getLength: Asks user for rectangle's length.      

double getLength()
{
    double length;
    cout << "Enter the rectangle's length: ";
    cin >> length;
    return length;
}

// getWidth: Asks user for rectangle's width.        

double getWidth()
{
    double width;
    cout << "Enter the rectangle's width: ";
    cin >> width;
    return width;
}

// getArea: Calculates and returns area.             

double getArea(double length, double width)
{
    return length * width;
}

// displayData: Displays the rectangle's data.       

void displayData(double length, double width, double area)
{
    cout << "\n===== Rectangle Information =====" << endl;
    cout << "Length: " << length << endl;
    cout << "Width : " << width << endl;
    cout << "Area  : " << area << endl;
    cout << "=================================" << endl;
}