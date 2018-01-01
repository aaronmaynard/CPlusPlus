/*
The monthly payment on a loan may be calculated by the following formula:
Payment = (Rate*(1+Rate)^N) / (((1+Rate)^N -1)) * L

Rate is the monthly interest rate, which is the annual interest rate divided by 12.
(12% annual interest would be 1% monthly interest.)  N is the number of payments and
L is the amount of the loan.
Write a program that asks for these values and displays a report similar to:
Loan Amount: $ 10000.00
Monthly Interest Rate: 1%
Number of Payments: 36
Monthly Payment: $   332.14
Amount Paid Back: $ 11957.15
Interest Paid $  1957.15

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    // Declare variables
    double rate, annualRate, loanAmount, amountPaidBack, interestPaid, monthlyPayments;
    int numberOfPayments;

    // User input
    cout << "Enter the loan amount: ";
    cin >> loanAmount;
    cout << "Enter the annual interest rate: ";
    cin >> annualRate;
    cout << "Enter number of payments: ";
    cin >> numberOfPayments;

    // Do the math
    rate = (annualRate/12) / 100;
    monthlyPayments = ((rate*pow((1+rate), numberOfPayments))/(pow((1+rate), numberOfPayments) -1))* loanAmount;
    amountPaidBack = monthlyPayments * numberOfPayments;
    interestPaid = amountPaidBack - loanAmount;
    rate = rate * 100;

    // Print to screen
    cout << setprecision(2) << fixed;
    cout << "Loan Amount:\t\t$" << setw(9) << loanAmount << endl;
    cout << "Monthly Interest Rate:\t" << setw(9) << rate << "%" << endl;
    cout << "Number of Payments:\t$" << setw(9) << numberOfPayments << endl;
    cout << "Monthly Payment:\t$" << setw(9) << monthlyPayments << endl;
    cout << "Amount Paid Back:\t$" << setw(9) << amountPaidBack << endl;
    cout << "Interest Paid:\t\t$" << setw(9) << interestPaid << endl;

    return 0;
}
