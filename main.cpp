// COMSC-210 | Lab 10 | Mira Anand
// Module 6, Lesson: Linked Lists, Assignment: Fork This Repo
// IDE used: Visual Studio Code for Mac

// This is a simple C++ program that will perform 3 tasks: 
// 1. Ask the user for their first and last name
// 2. Output the statement "Hello, World!"
// 3. Output a statement that includes the user's inputted name

#include <iostream>
#include <string>
using namespace std;

int main() 
{

    // add any code here, sort of a 'hello world plus' code block

    // declaration of a string variable to hold the user's first and last name
    string name;

    // get user input for first and last name
    cout << "Please enter your first and last name: ";
    getline(cin, name);

    // output "Hello, World!" and user's inputted name
    cout << "Hello, World!" << endl;
    cout << "My name is " << name << "." << endl;

    return 0;
}