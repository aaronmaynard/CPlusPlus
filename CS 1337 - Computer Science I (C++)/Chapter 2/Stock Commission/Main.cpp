/*
Kathryn bought 750 shares of stock at a price of $35.00 per share.  She must pay
her stock broker a 2% commission for the transaction.  Write a program that
calculates the display the following:
-The amount paid for the stock alone (without the commission)
-The amount of the commission
-The total amount paid (for the stock plus the commission)

Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main()
{
    double shares = 750;
    double sharePrice = 35.00;
    double commission = (shares * sharePrice) * 0.02;

    cout << "Amount paid for the stock = $" << shares * sharePrice << endl;
    cout << "Amount of commission paid = $" << commission << endl;
    cout << "Total amount paid = $" << (shares * sharePrice) + commission << endl << endl;

    return 0;
}
