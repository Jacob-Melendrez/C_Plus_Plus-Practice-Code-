//Preprocessor directives to include necessary libraries. 
#include <iostream>

// Namespace to avoid using std:: prefix before using standard library. (Easier Syntax) 
using namespace std;

// Main function that returns an integer value.
int main() 

//Opening bracket of main function. 
{

// Variable declarations. (3 Integers and 1 constant integer.)
const int TABLESPOONS_PER_CUP = 16;
    int numCups;
	int numTablespoons;

//Prompts user for input. 
cout << "\n";
cout << "Enter number of cups: ";
cout << "\n";

// User input is stored in buffer and then into numCups. 
    cin >> numCups;

//Expression to convert cups to tablespoons. 
	numTablespoons = numCups * TABLESPOONS_PER_CUP;

// Outputs calculation. 
cout << "\n";
cout << numCups << " cups = " << numTablespoons << " tablespoons" << endl;
cout << "\n";

//Main function must return an integer value. In this case it is 0. 0 
// tells the compiler it executed properly. 
return 0;

//Closing bracket of main function. 
}