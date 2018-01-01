/*
Write a program that calculates a car's gas mileage.  The program should ask the user
to enter the number of gallons of gas the car can hold, and the number of miles it can
be driven on a full tank.  It should then display the number of miles that my be driven
per gallon of gas.
Author: Aaron Maynard
*/

#include<iostream>
using namespace std;

int main()
{
    // Declare variables
    double capacity, miles, average;
    
    // User input
    cout << "Enter the number of size of the tank (gallons): ";
    cin >> capacity;
    cout << "Enter the number of miles per tank of gas: ";
    cin >> miles;
 
    // Do the math
    average = miles/capacity;

    // Display mpg
    cout << "The car's MPG is: " << average << endl << endl;

    system("pause");
    return 0;
}
