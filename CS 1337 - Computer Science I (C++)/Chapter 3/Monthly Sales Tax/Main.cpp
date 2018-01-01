/*
A retail company must file a monthly sales tax report listing the sales for the month
and the amount of sales tax collected.  Write a program that asks for the month, the
year, and the total amount collected at the cash register (that is, sales plus sales
tax).  Assume the state sales tax is 4% and the county sales tax is 2%.
If the total amount collected is known and the total sales tax is 6%, the amount of
product sales may be calculated as:
S = T/1.06
S is the product sales and T is the toal income (product sales plus sales tax).
The program should display a report similar to:
Month: October
----------------------
Total Collected: $ 26572.89
Sales: $ 25068.76
County Sales Tax: $   501.38
State Sales Tax: $  1002.75
Total Sales Tax: $  1504.13

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    // Declare variables
    string month;
    double totalCollected,stateTax = 0.04, countyTax = 0.02, sales,stateTaxTotal, countyTaxTotal, totalTax;

    // User input
    cout << "Enter Month: ";
    getline(cin, month);
    cout << "Enter total amount collected at cash register: $";
    cin >> totalCollected;

    // Do the math
    sales = totalCollected/1.06;
    stateTaxTotal = sales * stateTax;
    countyTaxTotal = sales * countyTax;
    totalTax = stateTaxTotal + countyTaxTotal;

    // Print to screen
    cout << endl;
    cout << "Month: " << month << endl;
    cout << "-------------------------" << endl;
    cout << setprecision(2) << fixed;
    cout << "Total collected: " << setw(10) << "$" << setw(9) << totalCollected << endl;
    cout << "Sales: " << setw(20) << "$" << setw(9) << sales << endl;
    cout << "County Sales Tax:" << setw(10) << "$" << setw(9) << countyTaxTotal << endl;
    cout << "State Sales Tax: " << setw(10) << "$" << setw(9) << stateTaxTotal << endl;
    cout << "Total Sales Tax: " << setw(10) << "$" << setw(9) << totalTax << endl << endl;

    return 0;
}
