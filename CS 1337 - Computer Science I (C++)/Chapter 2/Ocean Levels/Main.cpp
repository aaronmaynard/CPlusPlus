/*
Assuming the ocean's level is currently rising at about 1.5 millimeters per year, write a
program that displays the number of mm higher than the current level that the ocean's level
will be in 5, 7, and 10 years.

Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main()
{
    //Declare variables
    double currentLevel = 0.00; // The current level risen will start at zero
    double risingLevel = 1.5;   // 15 millimiters per year

    // Display levels on screen
    cout << "In 5 years, the ocean's level will be " << risingLevel * 5 << " mm higher " << "than the current level \n";
    cout << "In 7 years, the ocean's level will be " << risingLevel * 7 << " mm higher " << "than the current level \n";
    cout << "In 10 years, the ocean's level will be " << risingLevel * 10 << " mm higher " << "than the current level \n\n";

    system("pause");
    return 0;
}
