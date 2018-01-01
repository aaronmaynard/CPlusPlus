/*
Write a program that asks the user to enter a number within the range of 1 through
10.  Use a switch statement to display the Roman numeral version of that number.
Input validation: do not accept a number less than 1 or greater than 10.

Author: Aaron Maynard
*/

#include<iostream>

using namespace std;

int main(){
    // Declare variables
    int number;

    // User input
    cout << "Enter a number (1-10): ";
    cin >> number;

    // Case statement based on user input
    if(number < 1 || number > 10)
        cout << "The number cannot be less than 1 or greater than 10!" << endl << endl;
    else{
        switch(number){
            case 1: cout << "The Roman numeral is: I" << endl;
                break;
            case 2: cout << "The Roman numeral is: II" << endl;
                break;
            case 3: cout << "The Roman numeral is: III" << endl;
                break;
            case 4: cout << "The Roman numeral is: IV" << endl;
                break;
            case 5: cout << "The Roman numeral is: V" << endl;
                break;
            case 6: cout << "The Roman numeral is: VI" << endl;
                break;
            case 7: cout << "The Roman numeral is: VII" << endl;
                break;
            case 8: cout << "The Roman numeral is: VIII" << endl;
                break;
            case 9: cout << "The Roman numeral is: IX" << endl;
                break;
            case 10: cout << "The Roman numeral is: X" << endl;
                break;
            default:  cout << "You must enter a number between 1 - 10!" << endl;
        }  // Switch ends
    }  // Else ends

    return 0;
}
