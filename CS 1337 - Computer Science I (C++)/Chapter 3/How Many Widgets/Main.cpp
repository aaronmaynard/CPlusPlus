/*
The Yukon Widget Company manufactures widgets that weight 12.5 pounds each.
Write a program that calculates how many widgets are stacked on a pallet, based on
the total weight of the pallet.  The program should ask the user how much the pallet
weighs by itself and with the widgets stacked on it.  It should then calculate
and display the number of widgets stacked on the pallet.

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // Declare variables
    double widgetWeight = 12.5;
    double palletEmpty, palletWeight;
    double widgetNumber;

    // User input
    cout << "Enter empty pallet weight (pounds): ";
    cin >> palletEmpty;
    cout << "Enter pallet weight (with widgets): ";
    cin >> palletWeight;

    // Do the math
    widgetNumber = (palletWeight - palletEmpty) / widgetWeight;

    // Print to screen
    cout << endl << endl;
    cout << "There are: " << widgetNumber << " widgets on the pallet." << endl;
 
    return 0;
}
