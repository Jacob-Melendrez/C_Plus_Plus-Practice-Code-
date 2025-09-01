// VOLUME OF PYRAMID CODE

//Preprocesser directives. (Uploads necessary packages to compute code.)
#include <iostream>
// Allows for easier syntax.(Dont have to type std:: before usage of certain functions.)
using namespace std;

// Primary function where code is ran. Almost always the first function ran by the compiler.
// Returns an int value. This value is used to indicate whether the program ran successfully or not.
int main() {
	// Variable declarations.
	int height;
	int length;
	int width;
	int pyramidVolume;

// Every line with cout outputs message to terminal for user to see. 
// Every lineB with cin takes input from user. 
cout << "Give me a height: "; 
	cin >> height;
cout << "Give me a length: ";
	cin >> length;
cout << "Give me a width: ";
	cin >> width;

/* When you calculate the volume of a pyramid you must
you must find the product of height, length and width first
and then you can divide by 3 to find the appropriate volume.
This is a simple example of precedence at work. The order of precedence
in most programming languages is the following:

1. () (Parentheses)
2.  - (Negation)
3. * (Multiplication) , / (Division) , % (Modulus) (EQUAL PRECEDENCE = Read from left to right.)
4. - (Subtraction) , + (Addition) (EQUAL PRECEDENCE = Read from left to right.)

*/
   pyramidVolume = (height * length * width) / 3;


// Outputs results to terminal with string literal Volume: first then followed by the actual volume value. 
// Each component of the cout statement needs to be separated by <<.
// endl is used to insert a new line.
   cout << "Volume: " << pyramidVolume << endl;

// Ends the main function and returns 0 to indicate successful completion.
   return 0;

// Closes the main function. 
}