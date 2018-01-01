/*
A soft drink company recently surveyed 16,500 of its customers and found that
approximately 15% of those surveyed purchase one of more energy drinks per week.
Of those customers who purchase energy drinks, approximately 58% of them prefer
citrus flavored energy drinks.  Write a program that displays the following:
-The approximate number of customers in the survey who purchase one or
 more energy drinks per week
-The approximate number of customers in the survey who prefer citrus
 flavored energy drinks
 
Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double customers = 16500;
    double oneDrink = 0.15;
    double citrus = 0.58;
    
    // Print to screen
    cout << "In a survey of " << customers << " customers:" << endl;
    cout << customers * oneDrink << " purchase one or more drinks per week." << endl;
    cout << (customers * oneDrink) * citrus << " prefer citrus flavored energy drinks." << endl << endl;

    return 0;
}
