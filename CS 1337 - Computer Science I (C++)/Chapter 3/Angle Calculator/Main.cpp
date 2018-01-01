/*
Write a program that asks the user for an angle, entered in radians.  The program
should then display the sine, cosine, and tangent of the angle. (Use the sin, cos,
and tan library functions to determine these values).  The output should be
displayed in fixed-point notation, rounded to four decimal places of precision.

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    // Declare variables
    double angle, sine, cosine, tangent;

    // User input
    cout << "Enter an angle (in radians): ";
    cin >> angle;

    // Do the math
    sine = sin(angle);
    cosine = cos(angle);
    tangent = tan(angle);

    // Print to screen
    cout << setprecision(4) << fixed;
    cout << "The sine is: " << sine << endl;
    cout << "The cosine is: " << cosine << endl;
    cout << "The tangent is: " << tangent << endl;

    return 0;
}
