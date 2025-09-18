/*
    File: query.cpp
    Created by: Jacob Melendrez   
    Creation Date: 09/17/25
    Synopsis: This program read in three shapes and a query point and calculates which of those shapes contain the point if any.
    There are 2 circles and one rectangle that will be given input by the user to deternine how big they are and then compared
    to the query point coordinate the user provides at the end.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
// First circle variables. 
    double xCntrFirstCircle;
    double yCntrFirstCircle;
    double radFirstCircle;
    
// Rectangle variables.
    double xRectangle;
    double yRectangle;
    double lengthRectangle;
    double heightRectangle;

// Second circle variables. 
    double xCntrSecondCircle;
    double yCntrSecondCircle;
    double radSecondCircle;

// Query Point Coordinates
    double xQueryPoint;
    double yQueryPoint;

//Boolean variables to test if query point is inside. 
    bool queryPntInsideRec = false;
    bool queryPntInsideCir1 = false;
    bool queryPntInsideCir2 = false;


// After our variables have been declared, we now prompt the user for multiple different decimal values to 
// determine if the query point/point in question is in any shape or none of them. 

// Prompts user for x and y coordinates of first circle as well as radius. 
cout << "Enter x and y coordinates of the 1st circle: ";
    cin >> xCntrFirstCircle >> yCntrFirstCircle;
cout << "Enter radius of the 1st circle: ";
    cin >> radFirstCircle;

// Prompts the user for x and y coordinates of the rectangle. (This is the bottom left corner of the rectnagle 
// as explained in the instructions for this project.) It also asks for the rectangle length and width. 
cout << "Enter x and y coordinates of the rectangle: ";
    cin >> xRectangle >> yRectangle;
cout << "Enter length and height coordinates of the rectangle: ";
    cin >> lengthRectangle >> heightRectangle;

// Prompts the user for x and y coordinates for the second circle including the radius. 
cout << "Enter x and y coordinates of the 2nd circle: ";
    cin >> xCntrSecondCircle >> yCntrSecondCircle;
cout << "Enter radius of the 2nd circle: ";
    cin >> radSecondCircle;

// Prompts the user for the query point. The point we are going to test against. 
cout << "Enter x and y coordinates of the query point: ";
    cin >> xQueryPoint >> yQueryPoint;

/* 
These next blocks of code consists of 3 different if statements that must execute. They are not nested because 
we need all three shapes to be compared to the query point every time to decide if we need to modify 
the boolean value associated with that shape away from automatically false. If the specific conditions are true in the 
intitial if statement for each shape, it will remain false for that shape, but if its all false and not a single OR ||
is satisfied then the boolean will flip to true and tell us that the point is inside of that particular shape.
*/

/* 
1. Test query point against rectangle. This rather complex conditional statement (Thank god zybooks highlights associated parentheses for you
I think all of the parentheses here are nevessary it took me awhile to debug.) tests to see if the x value of the query point is outside the 
range of the rectangle information provided. Since the coordinates of the rectangle provided by the user are always the bottom left corner, this is
extremely useful because if we take the absolute value of the height and length we can compare the query point coordinates to it.  
*/
if  ((xQueryPoint < xRectangle || (xQueryPoint > (xRectangle + fabs(lengthRectangle)))) ||
    ((yQueryPoint < yRectangle) || (yQueryPoint > (yRectangle + fabs(heightRectangle)))))
{
// The query point is not inside the rectangle.
queryPntInsideRec = false;
}
else 
{
// The query point is inside the rectangle.
queryPntInsideRec = true;
}

/* 
2. Test query point against the first circle. This conditional statement uses the standard formula of a circle to compare to the 
radius provided by the user. The standard format of the formula of a circle is ( ( x - a )^2 ) + ( ( y - b )^2 ) = r^2 . 
This formula is easy to use and doesnt require any manipulation because we already have all the values of each part of the equation. 
All we have to do is put the correct declared variables we made into the definition and follow precedence. x = x coordinate in question/x coordinate 
of query point. y = y value of query point. The query point coordinates were given by the user at the end of the prompts. 
a and b are the x and y coordinate values of the center of the circle provided by the user earlier on. Finally r = radius of this specific circle. 
Placing the variables into the correct places allows us to test if the query point is greater than radius squared. If it is true then it remains false.
However if the equation evaluates to false then the boolean value will be flipped to true telling us this point provided is inside of the first circle. 
*/
if (pow((xQueryPoint - xCntrFirstCircle), 2) + pow((yQueryPoint - yCntrFirstCircle), 2) > pow(radFirstCircle, 2))
{
// The query point is not inside the first circle.
queryPntInsideCir1 = false; // Also kind of redundent because its automatically false but helps with understanding/readibility of whats going on here. 
}
else
{
// The query point is inside the first circle.
queryPntInsideCir1 = true;
}


/* 
3. Test query point against the second circle. Same equation is used here but the values for radius, and a and b are different because the circle might 
be bigger or smaller and have a center position that is different from the first. The same logic as the first circle applies here but the numbers could be different
because the variables used here are different. 
*/
if (pow((xQueryPoint - xCntrSecondCircle), 2) + pow((yQueryPoint - yCntrSecondCircle), 2) > pow(radSecondCircle, 2))
{
// The query point is not inside the second circle.
queryPntInsideCir2 = false; // Also redundent here but just for clarity and readability.,
}
else
{
// The query point is inside the second circle.
queryPntInsideCir2 = true;
}


/*
Finally now that we have tested the query point in relation to each shape. We have all the boolean combinations 
possible listed below to decide if the query point we are testing is in some of the shapes, all of them or none of them. We make this one block and not a bunch of 
if statements because it has to only be one of these combinations. I dont want two different outputs that 
show it is in rectangle, and circle 1 and then also say its in rectangle independently and then say it is in circle 1 independently. 
*/
// All boolean values were flipped and the point is in all three shapes. (Very rare and unlikely)
    if (queryPntInsideRec == true && queryPntInsideCir1 == true && queryPntInsideCir2 == true)
    {   
        cout << "All shapes contain point " << "(" << xQueryPoint << ", " << yQueryPoint << ")." << endl;
    }

// The point triggered/flipped two of the three boolean values telling us its in two out of three shapes. 
    else if (queryPntInsideRec == true && queryPntInsideCir1 == true)
    {
        cout << "1st circle and rectangle contain point " << "(" << xQueryPoint << ", " << yQueryPoint << ")." << endl;
    }
    else if (queryPntInsideRec == true && queryPntInsideCir2 == true)
    {
        cout << "2nd circle and rectangle contain point " << "(" << xQueryPoint << ", " << yQueryPoint << ")." << endl;
    }
    else if (queryPntInsideCir1 == true && queryPntInsideCir2 == true)
    {
        cout << "Both circles contain point " << "(" << xQueryPoint << ", " << yQueryPoint << ")." << endl;
    }
// The point triggered/flipped one of the three boolean values telling us its in one out of three shapes. 
    else if (queryPntInsideCir1 == true)
    {
        cout << "1st circle contains point " << "(" << xQueryPoint << ", " << yQueryPoint << ")." << endl;
    }
    else if (queryPntInsideCir2 == true)
    {
        cout << "2nd circle contains point " << "(" << xQueryPoint << ", " << yQueryPoint << ")." << endl;
    }
    else if (queryPntInsideRec == true)
    {
        cout << "Rectangle contains point " << "(" << xQueryPoint << ", " << yQueryPoint << ")." << endl;
    }
/* 
If none of the boolean values were flipped then the all three of them are automatically false from the 
initial declaration and assignment. This tells us the query point is not inside of any of the shapes given by the user. 
It is good to set the boolean values to false in this case becyuse there are a many more values that can be outside of the shapes provided 
than inside. Which means, your liklihood of getting inside of any of them let alone all three is very slim unless you are calculated about it. 
*/
else 
    {
        cout << "No shape contains point " << "(" << xQueryPoint << ", " << yQueryPoint << ")." << endl;
    }

return 0;
}