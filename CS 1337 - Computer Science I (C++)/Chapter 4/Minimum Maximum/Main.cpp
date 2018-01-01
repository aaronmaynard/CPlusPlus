/*
Write a program that asks the user to enter two numbers.  The program should use the
conditional operator to determine which number is the smaller and which is the larger.

Author: Aaron Maynard
*/

#include<iostream>

using namespace std;

int main(){
    // Declare variables
    double number1, number2;

    // User input
    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    // Compare values and print to screen
    if(number1 > number2){
        cout << "The larger number is: " << number1 << endl;
    }else if(number1 < number2){
        cout << "The larger number is: " << number2 << endl;
    }else{
        cout << "Both numbers are the same!" << endl;
    }

    return 0;
}
