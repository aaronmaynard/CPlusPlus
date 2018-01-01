/*
Write a program that plays a word game with the user.  The program should ask the
user to enter the following:
* His or her name
* His or her age
* The name of a city
* The name of a college
* A profession
* A type of animal
* A pet's name
After the user has entered these items, the program should display the following
story, inserting the user's input into the appropriate locations:
There once was a person named NAME who lived in CITY.  At the age of AGE, NAME
went to college at COLLEGE.  NAME graduated and went to work as a PROFESSION.
Then, NAME adopted a(n) ANIMAL named PETNAME.  They both lived happily ever after!

Author: Aaron Maynard
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    string Name, City, College, Profession, Animal, PetName;
    double Age;

    cout << "Enter your name: ";
    getline(cin, Name);
    cout << "Enter your age: ";
    cin >> Age;
    cin.ignore();
    cout << "Enter the name of a city: ";
    getline(cin, City);
    cout << "Enter the name of a college: ";
    getline(cin, College);
    cout << "Enter a profession: ";
    getline(cin, Profession);
    cout << "Enter a type of an animal: ";
    getline(cin, Animal);
    cout << "Enter a pet's name: ";
    getline(cin, PetName);


    cout << "There once was a person named " << Name << " who lived in " << City << ". At the age of " << Age << ", " << Name << " went to " << College << ".  " << Name << " graduated and went to work as a " << Profession << ".  Then, " << Name << " adopted a(n) " << Animal << " named " << PetName << ".  They both lived happily ever after!" << endl;

    return 0;
}
