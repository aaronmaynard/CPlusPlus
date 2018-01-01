/*
Many financial experts advise that property owners should insure their homes or
buildings for at least 80% of the amount it would cost to replace the structure.
Write a program that asks the user to enter the replacement cost of a building
and then displays the minimum amount of insurance he or she should buy for the
property.

Author: Aaron Maynard
*/

#include<iostream>
using namespace std;

int main()
{
    // Declare variables
    double buildingCost, replacementCost;

    // User input
    cout << "Enter the replacement cost of your building: ";
    cin >> buildingCost;

    // Do the math
    replacementCost = buildingCost * 0.80;

    // Print to screen
    cout << "The Minimum insurance you should buy is: $" << replacementCost << endl;

    return 0;
}
