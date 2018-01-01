/*
Write a program that displays the following pieces of information, each on a separate line:
Your name
Your address, with city, state, and ZIP code
Your telephone number
Your college major
Use only a single cout statement to display all of this information.

Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    string name = "Aaron Maynard";
    string address = "123 Main St., Dallas, TX 75261";
    string phone = "123-456-7890";
    string degree = "Computer Science";
    
    // Print to screen
    cout << name << "\n" << address "\n" << phone "\n" << degree;

    system("pause");
    return 0;
}
