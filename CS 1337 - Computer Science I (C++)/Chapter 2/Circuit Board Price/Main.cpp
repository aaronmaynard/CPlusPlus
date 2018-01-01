/*
An electronics company sells circuit boards at 35% profit.  Write a program that will calculate
the selling price of a circuit board that costs $14.95. Display the result on the screen.

Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double basePrice = 14.95;
    double sellPrice = (basePrice * 0.35) + basePrice;

    // Display on screen
    cout << "The selling price of a circuit board is: $" << sellPrice << endl << endl;

    system("pause");
    return 0;
}
