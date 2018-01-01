/*
A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town and 28.9
miles per gallon when driven on the highway.  Write a program that calculates and displays the
distance the car can travel on one tank of gas when driven in town and when driven on the highway.
Hint: the following formula can be used to calculate the distance:
Distance = number of gallons X average miles per gallon

Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double gasTank = 20;
    double averageTown = 23.5;
    double averageHighway = 28.9;
    double distance;

    // Display on screen
    cout << "The car can travel " << gasTank * averageTown << " miles in town \n";
    cout << "The car can travel " << gasTank *averageHighway << " miles on the highway \n\n";

    system("pause");
    return 0;
}
