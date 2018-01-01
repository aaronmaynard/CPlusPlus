/*
Write a program that asks the user to enter the monthly costs for the following
expenses incurred from operating his or her automobile: loan payment, insurance,
gas, oil, tires, and maintenance.  The program should then display the total
monthly cost of these expenses, and the total annual cost of these expenses.

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double loanPayment, insurance, gas, oil, tires, maintenance;
    double monthlyTotal, annualTotal;

    cout << "Enter your monthly loan payment: ";
    cin >> loanPayment;
    cout << "Enter your monthly insurance: ";
    cin >> insurance;
    cout << "Enter your monthly gas expense: ";
    cin >> gas;
    cout << "Enter your monthly oil expenses: ";
    cin >> oil;
    cout << "Enter your monthly tires expenses: ";
    cin >> tires;
    cout << "Enter your monthly maintenance expenses: ";
    cin >> maintenance;

    monthlyTotal = loanPayment + insurance + gas + oil + tires + maintenance;
    annualTotal = monthlyTotal * 12;

    cout << setprecision(2) << fixed;
    cout << endl;
    cout << "Your total monthly expenses are: $" << monthlyTotal << endl;
    cout << "Your total  annual expenses are: $" << annualTotal << endl << endl;

    return 0;
}
