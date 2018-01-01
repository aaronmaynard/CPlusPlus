/*
Joe's Pizza Palace needs a program to calculate the number of slices a pizza of any
size can be divided into.  The program should perform the following steps:
A) Ask the user for the diameter of the pizza in inches.
B) Calculate the number of slices that may be taken from a pizza of that size.
C) Display a message telling the number of slices.
To calculate the number of slices that may be taken from the pizza, you must know
the following facts:
* Each slice should have an area of 14.125 inches
* To calculate the number of slices, simply divide the area of the pizza by 14.125
* The area of the pizza is calculated with this formula:
Area = Pi*r*r
Note: divide the diameter by 2 to get the radius.
Make sure the output of the program displays the number of slices in fixed point
notation, rounded to one decimal place of precision.  Use a named constant for Pi.

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // Declare variables
    double diameter, radius, slices, area;
    double const PI = 3.14159;

    // User input
    cout << "Enter the diameter of the pizza (inches): ";
    cin >> diameter;

    // Do the math
    radius = diameter/2;
    area = PI * radius * radius;
    slices = area/14.125;

    // Print to screen
    cout << setprecision(1) << fixed;
    cout << "You can have: " << slices << " slices from this pizza" << endl;

    return 0;
}
