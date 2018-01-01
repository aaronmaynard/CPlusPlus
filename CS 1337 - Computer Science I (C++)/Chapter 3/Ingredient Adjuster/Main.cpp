/*
A cookie recipe calls for the following ingredients:
 - 1.5 cups of sugar
 - 1 cup of butter
 - 2.75 cups of flour
 
The recipe produces 48 cookies with this amount of the ingredients. Write a 
program that asks the user how many cookies he or she wants to make, and then
displays the number of cups of each ingredient needed for the specified number
of cookies.

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    // Declare variables
    double sugar, butter, flour, cookies, ratio;
    

    // User input
    cout << "Enter the number of cookies you want to make: ";
    cin >> cookies;
    

    // Do the math
    ratio = cookies / 48;
    sugar = 1.5 * ratio;
    butter = 1 * ratio;
    flour = 2.75 * ratio;

    // Display to screen
    cout << setprecision(2) << fixed;
    cout << "Use the following ingredients:" << endl;
    cout << sugar << " cups of sugar" << endl;
    cout << butter << " cups of butter" << endl;
    cout << flour << " cups of flower" << endl;
    
    return 0;
}
