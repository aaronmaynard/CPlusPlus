/*
To get the average of a series of values, you add the values up and then divide
the sum by the number of values.  Write a program that stores the following values
in five different variables: 28, 32, 37, 24, 33.  The program should first
calculate the sum of these five variables and store the result in a separate variable
named sum.  Then, the program should divide by 5 to get the average.  Display
the average on the screen.
Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main(){
    // Declare variables
    int var1 = 28, var2 = 32, var3 = 37, var4 = 24, var5 = 33;
    int sum = var1+ var2 + var3 + var4 + var5;
    double average = sum / 5;
    
    // Display average
    cout << "The sum of " << val_one << " + " << val_two << " + " << val_three<< " + " << val_four << " + " << val_five << " = " << sum << endl;
    cout << "The average is: " << average << endl << endl;
    
    system("pause");
    return 0;
}
