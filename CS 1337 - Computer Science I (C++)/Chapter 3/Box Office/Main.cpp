/*
A movie theater only keeps a percentage of the revenue earned from ticket sales.
The remainder goes to the movie distributor.  Write a program that calculates a
theater's gross and net box office profit for a night.  The program should ask
for the name of the movie, and how many adult and child tickets were sold.
(The price of an adult ticket is $10.00 and a child's ticket is $6.00)  It
should display a report similar to:
Movie Name: "Wheels of Fury"
Adult Tickets sold: 382
Child Tickets sold: 127
Gross Box Office Profit: $4582.00
Net Box Office Profit: $916.40
Amount Paid to Distributor: $3665.60

Note: assume the theater keeps 20% of the gross box office profit.
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    // Declare variables
    string movieName;
    double ticketsAdult, ticketsChild, grossBox, netBox, distributorCut;
    double PRICE_ADULT = 10.00, PRICE_CHILD = 6.00;

    // User input
    cout << "Enter the name of the movie: ";
    getline(cin, movieName);
    cout << "Enter number of adult tickets sold: ";
    cin >> ticketsAdult;
    cout << "Enter number of child tickets sold: ";
    cin >> ticketsChild;

    // Do the math
    grossBox = (ticketsAdult * PRICE_ADULT) + (ticketsChild * PRICE_CHILD);
    netBox = grossBox * 0.20;
    distributorCut = grossBox - netBox;

    // Print to screen
    cout << left << setw(30) << "Movie Name:" << right << setw(5) << movieName << endl;
    cout << left << setw(30) << "Adult Tickets Sold:" << right << setw(5)  << ticketsAdult << endl;
    cout << left << setw(30) << "Child Tickets Sold:" << right << setw(5) << ticketsChild << endl;
    cout << setprecision(2) << fixed;
    cout << left << setw(30) << "Gross Box Office Profit:" << right << setw(5) << "$" << grossBox << endl;
    cout << left << setw(30) << "Net Box Office Profit:" << right << setw(5) << "$" << netBox << endl;
    cout << left << setw(30) << "Amount Paid to Distributor:" << right << setw(5) << "$" << distributorCut << endl << endl;

    return 0;
}
