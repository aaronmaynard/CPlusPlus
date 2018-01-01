/*
Write a program the asks the user for the number of males and the number of
females registered in a class.  The program should display the percentage of
males and females in the class.

Hint: Suppose there are 8 males and 12 females in a class. There are 20 students
in the class. The percentage of males can be calculated as 8 / 20 = 0.4 or 40%.
The percentage of females can be calculated as 12 / 20 = 0.6 or 60%.

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
    // Declare variables
    double males, females, total, mAverage, fAverage;

    // User input
    cout << "Enter the number of male students: ";
    cin >> males;
    cout << "Enter the number of female students: ";
    cin >> females;

    // Do the math
    total = males + females;
    mAverage = (males / total) * 100; // Format for percentage
    fAverage = (females / total) * 100; // Format for percentage

    // Display to screen
    cout << setprecision(1) << fixed;
    cout << mAverage << "% of the class are males, and " << fAverage << "% of the class are females." << endl;

    return 0;
}
