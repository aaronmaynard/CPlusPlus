/*
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program
that calculates the number of miles per gallon the gar gets. Display the result on the screen.
Hint: use the following formula to calculate miles per gallon (MPG):
MPG = miles driven/Gallons of Gas used

Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double gallons = 15, miles = 375;
    double MPG = miles/gallons;
    
    // Display on screen
    cout << "A car that holds " << gallons << " gallons of gasoline and \n" << "travels " << miles << " before refueling \n" << "gets " << MPG << " MPG \n\n";

    system("pause");
    return 0;
}
