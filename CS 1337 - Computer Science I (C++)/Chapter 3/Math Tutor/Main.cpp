/*
Write a program that can be used as a math tutor for a young student. The program
should display two random numbers to be added, such as:
  247
+ 129
------
The program should then pause while the student works on the problem.  When the
student is ready to check the answer, he or she can press a key and the program will
display the correct solution:
  247
+ 129
------
  376
  
Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std;

int main(){
    // Declare variables
    double number1, number2, sum;
    char ch;
    
    // Generate random number
    unsigned seed = time(0);
    srand(seed);
    number1 = 100 + rand() % 999;
    number2 = 100 + rand() % 999;
    
    // Do the math
    sum = number1 + number2;

    // Print to screen
    cout << setw(5) << number1 << endl;
    cout << setw(5) << number2<< " + \n";
    cout << setw(5) << "------" << endl << endl;;

    // User input
    cout << "Enter any key to see the answer: ";
    ch = cin.get();
    
    // Print to screen
    cout << setw(5) << sum << endl << endl;

    return 0;
}
