#include <iostream>
#include <cmath> 
using namespace std; 

int main() {

// Allocate array
const int TEMP_SIZE(6);
double temp[TEMP_SIZE];
double sum(0.0), average(0.0);
// Initialize array with values from the user
cout << "Enter the temperature for the last "
    << TEMP_SIZE << " days: " << endl;

double totalVal;

for (int i = 0; i < TEMP_SIZE; i++)
{
    cin >> temp[i];

    totalVal += temp[i];
}

cout << "The average of the six days is " << totalVal / TEMP_SIZE;

return 0;
}