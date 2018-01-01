/*
There are three seating categories at a stadium.  For a softball game, Class A seats
cost $15, Class B cost $12, and Class C seats cost $9.  Write a program that asks how
many tickets for each class of seats were sold, then displays the amount of income
generated from ticket sales.  Format your dollar amount in fixed-point notation, with
two decimal places of precision, and be sure the decimal point is always displayed.
Author: Aaron Maynard
*/

#include<iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables
    double classA = 15, classB = 12, classC = 9;
    double numberA, numberB, numberC;
    double total;
    
    // User input
    cout << "How many tickets were sold for Class A? >> ";
    cin >> numberA;
    cout << "How many tickets were sold for Class B? >> ";
    cin >> numberB;
    cout << "How many tickets were sold for Class C? >> ";
    cin >> numberC;
    
    // Display sales information
    cout << setprecision(2) << fixed;
    cout << "Sales from Class A: $" << numberA * classA << endl;
    cout << "Sales from Class B: $" << numberB * classB << endl;
    cout << "Sales from Class C: $" << numberC * classC << endl;
    total = (numberA*classA) + (numberB*classB) + (numberC*classC);
    cout << "Total sales generated: $" << total << endl << endl;

    system("pause");
    return 0;
}
