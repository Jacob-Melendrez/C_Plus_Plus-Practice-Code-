#include <iostream> 
#include <cmath>
#include <iomanip> 
using namespace std; 

int main() 
{
int zones;
double baseFare;
double incrementFare;

cout << "Enter number of zones: ";
cin >> zones;

cout << "Enter base fare ($): ";
cin >> baseFare;

cout << "Enter incremental fare per zone ($): ";
cin >> incrementFare;

cout.precision(2);
cout.setf(ios::fixed);

cout << right << setw(5) << ""; 

for(int g = 1; g <= zones; g++)
{
    cout << right << setw(7) << g;
}
cout << '\n';

cout << setfill('-') << setw(5 + 7 * zones) << "" << setfill(' ') << '\n';

for (int i = 0; i < zones; i++)
{
    cout << right << setw(5) << i + 1;
    
    for(int j = 0; j < zones; j++)
    {
        cout << right << setw(7) << (baseFare + incrementFare * abs(i - j));    
    }
    cout << '\n';
}


return 0;
}