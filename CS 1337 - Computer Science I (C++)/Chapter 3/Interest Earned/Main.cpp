/*
Assuming there are no deposits other than the original investment, the balance in a
savings account after one year may be calculated as:

Amount = Principal * (1 +(Rate/T)^T

Principal is the balance in the savings account, Rate is the interest rate, and T is
the number of times the interest is compounded during a year (T is 4 if the interest
is compounded quarterly).
Write a program that asks for the principal, the interest rate, and the number of
times the interest is compounded.  It should display a report similar to:
Interest Rate: 2.25%
Times compounded: $      12
Principal: $ 1000.00
Interest: $   43.34
Amount in Saving: $ 1043.34

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    // Declare variables
    double principal, interestRate, interestAmount, total;
    int timesCompound;
    
    // User input
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the interest rate (percentage): ";
    cin >> interestRate;
    cout << "Enter the number of times the interest is compounded: ";
    cin >> timesCompound;


    // Do the math
    interestRate = interestRate/100;
    total = principal * pow((1 + (interestRate/timesCompound)), timesCompound);
    interestAmount = total - principal;
    interestRate = interestRate * 100;

    // Print to screen
    cout << setprecision(2) << fixed;
    cout << "Interest Rate:" << "\t\t" << setw(9) << interestRate << "%" << endl;
    cout << "Times Compounded:" << "\t" << setw(9) << timesCompound << endl;
    cout << "Principal:" << "\t\t" << "$" << setw(8) << principal << endl;
    cout << "Interest:" << "\t\t" << "$" << setw(8) << interestAmount << endl;
    cout << "Amount in savings:" << "\t" << "$" << setw(8) << total << endl;

    return 0;
}
