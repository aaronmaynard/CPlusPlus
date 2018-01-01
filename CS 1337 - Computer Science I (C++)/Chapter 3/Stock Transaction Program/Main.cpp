/*
Last month Joe Purchased some stock in Acme Software, Inc.  Here are the details of
the purchase:
* The number of shares that Joe purchased was 1,000
* When Joe purchased the stock, he paid $32.87 per share
* Joe paid his stock broker a commission that amounted to 2% of the amount he paid
  for the stock.
Two weeks later joe sold the stock.  Here are the details of the sale:
* The number of shares that Joe sold was 1,000
* He sold the stock for $33.92 per share
* He paid his stock broker another commission that amounted to 2% of the amount
  he received for the stock.
Write a program that displays the following information:
* The amount of money Joe paid for the stock.
* The amount of commission Joe paid his broker when he bought the stock.
* The amount that Joe sold the stock for.
* The amount of commission Joe paid his broker when heh sold the stock.
* Display the amount of profit that Joe made after selling his stock and paying 
  the two commissions to his broker.  (If the amount of profit that your program
  displays is a negative number, then Joe lost money on the transaction.)

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // Declare variables
    double sharesBought, stockPrice1, commission1, sharesSold, stockPrice2, commission2, total1, total2;
    // Do a little bit of math
    sharesBought = 1000;
    sharesSold = 1000;
    stockPrice1 = 32.87;
    stockPrice2 = 33.92;
    commission1 = (sharesBought * stockPrice1) * 0.02;
    commission2 = (sharesSold * stockPrice2) * 0.02;
    total1 = (sharesBought * stockPrice1) + commission1;
    total2 = (sharesSold * stockPrice2) + commission2;

    // Print to screen
    cout << setprecision(2) << fixed;
    cout << "Amount paid for the stock: $" << sharesBought * stockPrice1 << endl;
    cout << "Commission paid to broker : $" << commission1;
    cout << "\n-----------------------------\n";
    cout << "The stock sold for: $" << sharesSold * stockPrice2 << endl;
    cout << "Commission paid to broker : $" << commission2 << endl;
    cout << "Profit: " << total2 - total1 << endl;

    return 0;
}
