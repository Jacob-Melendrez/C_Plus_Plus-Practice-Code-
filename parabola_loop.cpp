#include <iostream>
#include <cmath> 
using namespace std;

int main() {

int xmin, xmax;

cout << "Enter minimum and maximum x values. ";
cin >> xmin >> xmax;

for (int x = xmin; x <= xmax; x++)
{
    cout << "When x is " << x << ", ";
    cout << "f(x) is " << 10 * pow(x, 2) + (3 * x) - 2 << endl;
}

return 0;
}