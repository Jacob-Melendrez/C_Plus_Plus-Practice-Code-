

/*
 Program chapter1_1                 
 This program computes the             
 distance between two points. 
*/

#include<iostream>//Required for cout
#include<cmath>//Required for sqrt()
using namespace std;

int main()
{
  // Declare and initialize objects.
double x1{1}, y1{5}, x2{4}, y2{7},
side1, side2, distance;

  // Compute sides of a right triangle.
side1 = x2 - x1;
side2 = y2 - y1;
distance = sqrt(side1*side1 + side2*side2);

 // Print blank space so it outputs in terminal cleaner.
cout << "                    " << endl;

  // Print distance
cout << "The distance between the two points is "<< distance << endl;

 // Print blank space so it outputs in terminal cleaner.
cout << "                    " << endl;

  // Exit program
return 0;

};
/*----------------------------------------------------*/
