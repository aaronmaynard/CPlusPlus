/*
Write a program that converts Celsius temperatures to Fahrenheit temperatures.  The
formula is:
F = (9/5)*C + 32
F is the Fahrenheit temperature and C is the Celsius temperature.

Author: Aaron Maynard
*/

#include<iostream>
using namespace std;

int main(){
    // Declare variables
    double celsius, fahrenheit;

    // User input
    cout << "Enter Celsius temperature: ";
    cin >> celsius;

    // Do the math
    fahrenheit = ((9/5) * celsius) + 32;

    // Print to screen
    cout << celsius << " Celsius = " << fahrenheit << " Fahrenheit" << endl;

    return 0;
}
