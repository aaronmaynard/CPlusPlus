/*
Write a program that computes the tax and tip on a restaurant bill for a patron
with a $88.67 meal charge.  The tax should be 6.75% of the meal cost.  The tip
should be 20% of the total after adding the tax.  Display the meal cost, tax
amount, tip amount, and total bill on the screen.
Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main()
    {
    // Declare variables
    double meal = 88.67;
    double tax = 0.0675 * meal;
    double tip = (tax + meal) * 0.20;
    double total = meal + tax + tip;

    cout << "The meal charge is: $" << meal << endl;
    cout << "The tax amount is: $" << tax << endl;
    cout << "The tip amount is: $" << tip << endl;
    cout << "The total bill is: $" << total << endl << endl;

    system("pause");
    return 0;
}
