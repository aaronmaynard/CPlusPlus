/*
Write a program that will convert US dollars amounts to Japanese yen and to euros, 
storing the conversion factors in the constants YEN_PER_DOLLAR and EUROS_PER_DOLLAR.
To get the most up-to-date rates, search the internet using the term "currency 
exchange rate".  If you cannot find the most recent exchange rates, use the 
following:
1 dollar = 83.14 Yen
1 dollar = 0.7337 Euros
Format your currency amounts in fixed-Point notation, with two decimal places of
precision, and be sure the decimal point is always displayed.

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // Declare variables
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;
    double dollars, yen, euros;

    // User input
    cout << "Enter dollar amount: ";
    cin >> dollars;

    // Do the math
    yen = dollars * YEN_PER_DOLLAR;
    euros = dollars * EUROS_PER_DOLLAR;
 
    // Print to screen
    cout << setprecision(2) << fixed;
    cout << "$" << dollars << " = " << yen << " Yen" << endl;
    cout << "$" << dollars << " = " << euros << " Euros" << endl;

    return 0;
}
