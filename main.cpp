//
//  main.cpp
//  Assignment_2
//
//  Created by Noah Honickman on 12/25/20.
//This program takes first name, last name, grade and age and prints them all out.

#include <iostream>
#include <string.h>
int main() {
    using namespace std;
    string firstname;
    string lastname;
    string grade;
    int age;
    cout << "What is your first name? ";
    getline(cin, firstname); // this seems to work well for getting multiple words in a // string
    cout <<"\n";
    cout << "What is your last name ?";
    cin >> lastname;
    cout << "\n";
    cout << "What letter grade do you deserve?";
    cin >> grade;
    cout << "\n";
    cout << "What is your age?";
    cin >> age;
    cout << "\n";
    cout << "Name: " << lastname << ", " << firstname << "\n";
    cout << "\n";
    cout << "Grade: " << grade << "\n";
    cout << "\n";
    cout << "Age: " << age << "\n";
    cout << "\n";
    
    
    
    return 0;
}
