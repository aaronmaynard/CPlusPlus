/*
A county collects property taxes on the assessment value of property, which is 60%
of the property's actual value.  If an acre of land is valued at $10,000, its
assessment value is $60,000.  The property tax is then 64 cents for each $100
of the assessment value.  The tax for the acre assessed at $6,000 will be
$38.40.  Write a program that asks for the actual value of a piece of property
and displays the assessment value and property tax.

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // Declare variables
    double propertyValue, propertyTax, propertyAssessment;

    // User input
    cout << "Enter the actual value of the property: ";
    cin >> propertyValue;

    // Do the math
    propertyAssessment = propertyValue * 0.60;
    propertyTax = (propertyAssessment/100) * 0.64;

    // Print to screen
    cout << setprecision(2) << fixed;
    cout <<"The assessment value is: " << propertyAssessment << endl;
    cout << "The property tax is: " << propertyTax << endl;

    return 0;
}
