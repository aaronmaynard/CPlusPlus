/*
You have been given a job as a programmer on a Cyborg supercomputer.  In order to
accomplish some calculations, you need to know how many bytes the following data
types use: char, int, float, and double.  You do not have any manuals, so you can't
look this information up.  Write a C++ program that will determine the amount of
memory used by these types and display the information on the screen.

Author: Aaron Maynard
*/

#include <iostream>
using namespace std;

int main()
{
    // Use the sizeof(type) to obtain bytes
    cout << "The size of a char is: " << sizeof(char) << endl;
    cout << "The size of an int is: " << sizeof(int) << endl;
    cout << "The size of a float is: " << sizeof(float) << endl;
    cout << "The size of a double is: " << sizeof(double) << endl << endl;

    system("pause");
    return 0;
}
