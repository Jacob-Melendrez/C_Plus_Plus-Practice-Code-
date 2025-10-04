#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;

int main() 
{

int rows;
double startingCelsius;
double stepInCelsius;

cout << "Enter number of rows: ";
cin >> rows;

while (rows <= 0)
{
    cout << "Value must be greater than 0." << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
}

cout << "Enter starting Celsius: ";
cin >> startingCelsius;

while (startingCelsius <= 0)
{
    cout << "Value must be greater than 0." << endl;
    cout << "Enter starting Celsius: ";
    cin >> startingCelsius;
}

cout << "Enter step in Celsius: ";
cin >> stepInCelsius;

while (stepInCelsius <= 0)
{
    cout << "Value must be greater than 0." << endl;
    cout << "Enter step in Celsius: ";
    cin >> stepInCelsius;
}

cout.precision(2);
cout.setf(ios::fixed);

cout << right << setw(10) << "Celsius" << 
        right << setw(13) << "Fahrenheit" <<
        right << setw(10) << "Kelvin" << '\n';

cout << setfill('-') << setw(33) << "" << setfill(' ') << '\n';

for(int i = 0; i < rows; i++)
{
        double celsiusVal = startingCelsius + (i * stepInCelsius);
        double fahrenheit = celsiusVal * 9.0 / 5.0 + 32.0;
        double kelvin = celsiusVal + 273.15;

        cout << right << setw(10) << celsiusVal;
        cout << right << setw(13) << fahrenheit;
        cout << right << setw(10) << kelvin;
        cout << '\n';
}
return 0;
} 