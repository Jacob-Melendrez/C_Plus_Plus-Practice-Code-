// File: basics.cpp
// Created by: Jacob Melendrez
// Created on: 09/05/2025
// Synopsis: This program addresses all 5 tests presented and 
// -tests basic knowledge of C++ using only the variables provided 
// -included in the template are used.

#include <iostream>

using namespace std;

int main()
{
  char character;
  char threeaway;
  double dec;
  double sci;
  int whole1;
  int whole2;
  
cout << "Enter a character: ";
// The variable "character" accepts the first character that the user inputs. 
    cin >> character;

cout << "Enter a decimal number: ";
//The variable "dec" accepts the first decimal value the user inputs. 
    cin >> dec;

cout << "Enter a number in scientific notation: ";
// The variable "sci" accepts the first decimal with e (scientific notation) inputted by the user. 
    cin >> sci;

cout << "Enter the first whole number: ";
// The variable "whole1" accepts the first whole number inputted by the user. 
    cin >> whole1;

cout << "Enter the second whole number: ";
// The variable "whole2" accepts a second whole number inputted by the user. 
    cin >> whole2;
cout << "\n";

// Using the variable "threeaway" we assign its value to 3 ASCII code numbers forward 
// - from what the variable "character" the user inputted initially. It is three ASCII code 
// - numbers away from any character the user chose. We had to use a static_cast to change
// - the character datatype to an integer for the variable "character" and then tell it 
// - to find the ASCII code 3 positions ahead. 
threeaway = static_cast<int>(character) + 3;

// This is an output statement using the newly assigned "threeway" variable calculated above
// - and then inserting the "character" variable the user inputted initially into the terminal.
cout << "Character " << "\'" << threeaway << "\'" << " is three away from " << "\'" << character << "\'" << endl;

// Escape sequence to make a space between outputs in the terminal so it is 
// - easier to read for the user. 
cout << "\n";

// In this line we modify the value inputted by the user for variable whole1 
// - so that it does a simple calculation of finding the inverse which is always
// - dividing by 1 since it is a whole number. We then give it a static_cast
// - so that the datatype outputted is always a float/decimal value like the output 
// - you requested. 
cout << "The reciprocal of " << whole1 << " is " << 1 / static_cast<float>(whole1) << endl;

// In this line we similarly modify the value inputted by the user for variable whole2 
// - so that it does a simple calculation of finding the inverse which is always
// - dividing by 1 since it is also a whole number. We then give it a static_cast
// - so that the datatype outputted is always a decimal value like the output 
// - you requested. 
cout << "The reciprocal of " << whole2 << " is " << 1 / static_cast<float>(whole2) << endl;

// In this line we do simple integer division between the two whole numbers the 
// - user inputted for variables whole1 and whole2. This integer division will 
// - always return a nearest whole number and ignore the remainder. 
cout << whole1 << " / " << whole2 << " is " << whole1 / whole2 << endl;

// In this line we do simple modulus "division" between the two whole numbers the 
// - user inputted for variables whole1 and whole2. This modulus will 
// - always return the remainder and ignore how many times whole2 goes into whole1. 
cout << whole1 << " modulus " << whole2 << " is " << whole1 % whole2 << endl;

// Another escape sequence to make a space between outputs in the terminal so it is 
// - easier to see the different groups of calculations.
cout << "\n";

// This statement outputs the previously assigned variable the user inputted f 
// - for "dec" and does a calculation with adding the variable "sci" inputted by the user with previous cin statement. 
// - We can manipulate these variables (and their values) with any other variables previously assigned. 
cout << dec << " + " << sci << " is " << dec + sci << endl;



// This output makes a simple calculation of 1 divided by the "dec" variable the user 
// - inputted initially. Technically any decimal value is over 1 so the inverse would be 1 divided
// - by the decimal value which this statement shows. 
cout << "The reciprocal of " << dec << " is " << 1 / dec << endl;



// This calculation simply takes 1 and divides it by the "sci" variable previously assigned. 
// - The reciprical of any decimal value is technically over 1 so, dividing 1 by the decimal 
// - value will be reciprical.
cout << "The reciprocal of " << sci << " is " << 1 / sci << endl;

// This calculation takes the "dec" variable previously assigned and divides it by the "sci"
// - variable also previously assigned and outputs it into the terminal. 
cout << dec << " / " << sci << " is " << dec / sci << endl;
cout << "\n";

return 0;
}
