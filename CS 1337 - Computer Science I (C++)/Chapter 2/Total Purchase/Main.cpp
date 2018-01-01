/*
A customer in a store is purchasing five items.  The prices of the five items are:
Item 1 = $15.95
Item 2 = $24.95
Item 3 = $6.95
Item 4 = $12.95
Item 5 = $3.95

Write a program that holds the prices of the five items in five variables.
Display each item's price, the subtotal of the sale, the amount of sales tax,
and the total.  Assume the sales tax is 7%.

Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double item1 = 15.95, item2 = 24.95, item3 = 6.95, item4 = 12.95, item5 = 3.95;
    double subtotal = item1 + item2 + item3 + item4 + item5;
    double tax = 0.07 * subtotal;
    double total = tax + subtotal; 

    // Display prices to screen with tax and total
    cout << "Price of item 1 = $" << itemOne << endl;
    cout << "Price of item 2 = $" << itemTwo << endl;
    cout << "Price of item 3 = $" << itemThree << endl;
    cout << "Price of item 4 = $" << itemFour << endl;
    cout << "Price of item 5 = $" << itemFive << endl << endl;
    cout << "Subtotal = $" << subtotal << endl;
    cout << "Tax = $" << tax << endl;
    cout << "Total = $" << total << endl << endl;

    system("pause");
    return 0;
}
