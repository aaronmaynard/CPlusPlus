/*
One acre of land is equivalent to 43,560 square feet.  Write a program that calculates
the number of acres in a tract of land with 391,876 square feet.

Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double conversion = 43560;  //1 acre = 43560 sq ft
    double land = 391876; // 391876 sq ft
    double acre = land / conversion;

    // Display on screen
    cout << land << " sq ft = " << acre << " acres \n\n";

    system("pause");
    return 0;
}
