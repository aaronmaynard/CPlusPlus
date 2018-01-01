/*
A bag of cookies holds 30 cookies.  The calorie information on the bag claims that
there are 10 "servings" in the bag and that a serving equals 300 calories.  Write a
program that asks the user to input how many cookies her or she actually ate and 
then reports how many total calories were consumed.

Author: Aaron Maynard
*/

#include<iostream>
using namespace std;

int main()
{
    // Declare variables
    double cookies, totalCalories, caloriesPerCookie, cookiesInBag = 30, servings = 10, caloriesPerServing = 300;

    // User input
    cout << "Enter the number of cookies eaten: ";
    cin >> cookies;
    
    // Do the math
    caloriesPerCookie = (servings * caloriesPerServing) / cookiesInBag;
    totalCalories = cookies * caloriesPerCookie;

    // Print to screen
    cout << "You consumed: " << totalCalories << " calories." << endl;

    return 0;
}
