/*
Write a program that asks for five test scores.  The program should calculate the
average test score and display it.  The number displayed should be formatted in
fixed-point notation, with one decimal point of precision.

Author: Aaron Maynard
*/

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // Declare variables
    double score1, score2, score3, score4, score5, average;

    // User input
    cout << "Enter score 1: ";
    cin >> score1;
    cout << "Enter score 2: ";
    cin >> score2;
    cout << "Enter score 3: ";
    cin >> score3;
    cout << "Enter score 4: ";
    cin >> score4;
    cout << "Enter score 5: ";
    cin >> score5;

    // Do the math
    average = (score1 + score2 + score3 + score4 + score5)/5;

    // Display to screen
    cout << setprecision(1) << fixed;
    cout << "The average score is: " << average << endl << endl;

    return 0;
}
