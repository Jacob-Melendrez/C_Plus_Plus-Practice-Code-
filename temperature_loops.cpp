#include <iostream>
#include <cmath>
using namespace std;

// Print a table converting fahrenheit to celsius

int main() {

int fahrenheit(0);
int min_fahrenheit(0);
int max_fahrenheit(0);
int STEP_SIZE(5);
    
cout << "Enter min and max fahrenheit: ";  
cin >> min_fahrenheit >> max_fahrenheit;
    
    while (min_fahrenheit > max_fahrenheit) 
    {   
        cerr << "min must be < max" << endl;
        cout << "Enter min and max fahrenheit: ";
        cin >> min_fahrenheit >> max_fahrenheit;
    }
        
    fahrenheit = min_fahrenheit;
    
    // Loop until fahrenheit is greater than max_fahrenheit
    while (fahrenheit <= max_fahrenheit)
    {
    // Convert fahrenheit to celsius
    float celsius = (fahrenheit - 32.0) * 5.0/9.0;
    cout << "fahrenheit = " << fahrenheit << "  celsius = " << celsius << endl; 
    fahrenheit += STEP_SIZE;   // Increment by STEP_SIZE
    }


return 0;
}
