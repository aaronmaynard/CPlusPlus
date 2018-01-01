
/*
Write a program that will compute the total sales tax on a $95 purchase. Assume
the state sales tax is 4 percent and the county sales tax is 2 percent.
Author: Aaron Maynard
*/

#include <iosteam>
using namespace std;

int main(){
    // Declare variables
    double purchase = 95;
    double stateTax = 0.04 * purchase;
    double countyTax = 0.02 * purchase;
    
    // Do the math
    double totalTax = stateTax + countyTax;
    
    // Display total sales tax
    cout << "The total sales tax on a $" << purchase << " purchase is: $" << totaltax << endl << endl;
    
    system("pause");
    return 0;
}
