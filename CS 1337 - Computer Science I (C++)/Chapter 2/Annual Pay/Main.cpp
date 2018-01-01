/*
Suppose an employee gets paid every two weeks and earns $2200 each pay period. In a year the
employee gets paid 26 times. Write a program that defines the following variables:
payAmount - This variable will hold the amount of pay the employee earns each pay period. Initialize with 1700.0
payPeriods - This variable will hold the number of pay periods in a year. Initialize with 26
annualPay - This variable will hold the employee's total annual pay, which will be calculated.

The program should calculate the employee's total annual pay by multiplying the employee's pay 
amount by the number of pay periods in a year, and store the result in the annualPay variable.
Display the total annual pay on the screen.

Author: Aaron Maynard
*/

#include <iosteam>
using namespace std;

int main()
{
    // Declare variables
    double payAmount = 2200.00;
    double payPeriods = 26;
    double annualPay = payAmount * payPeriods;

    // Display variables on screen
    cout << "The employee earns $" << payAmount << " each pay period. \n";
    cout << "There are " << payPeriods << " pay periods within the year. \n";
    cout << "The annual pay is: $" << annualPay << endl << endl;

    system("pause");
    return 0;
}
