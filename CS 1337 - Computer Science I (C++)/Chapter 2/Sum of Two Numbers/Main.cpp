/*
Write a program that stores the integers 50 and 100 in variables, and stores the sum of thses two in a variable named total.
Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main(){
    // Declare variables
    int var1 = 50;
    int var2 = 100;
    
    // Totals var1 and var2
    int total;
    total = var1 + var2;
    // Can also be written in one line as "int total = var1 + var2;"
    
    // Display total
    cout << "The sum of " << var1 << " + " << var2 << " = " << total << endl;
    
    // Pauses the program to view total, ends program
    system("pause");
    return 0;
}
