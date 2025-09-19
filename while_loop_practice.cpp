#include <iostream>
using namespace std;

/*
Integer valueIn is read from input. 
Write a while loop that iterates while valueIn is non-negative. In each iteration: 
Update integer outputVal as follows:
If valueIn is not divisible by 3, add valueIn to outputVal.
Otherwise, subtract valueIn from outputVal.
Then, read the next integer from input into variable valueIn. 
*/

int main() {
    int valueIn;
    int outputVal;

    outputVal = 0;
    cin >> valueIn;

while (valueIn >= 0) 
{
    if (valueIn % 3 == 0)
    {
        outputVal = outputVal - valueIn;
    }
    else 
    {
        outputVal = outputVal + valueIn;
    }
cout << "Output value is " << outputVal << endl;
cin >> valueIn;
}

cout << "Output value is " << outputVal << endl;

return 0;
}