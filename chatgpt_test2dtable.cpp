#include <iostream> 
#include <iomanip>
#include <cmath> 
using namespace std;

int main() {

    int rows;
    int columns;

    cout << "Enter number of rows: ";
    cin >> rows;

while (rows <= 0)
{
    cout << "Value must be greater than 0." << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
}

    cout << "Enter number of columns: ";
    cin >> columns;

while (columns <= 0 )
{
    cout << "Value must be greater than 0." << endl;
    cout << "Enter number of columns: ";
    cin >> columns;
}

cout.precision(2);
cout.setf(ios::fixed);

// Header 
cout << setw(5) << "";
for (int k = 1; k <= columns; k++)
{
    cout << setw(7) << k;
}
cout << endl;

cout << setfill('-') << setw(5+7 * columns) << "" << setfill(' ') << '\n';

for (int i = 1; i <= rows; i++)
{
    cout << right << setw(5) << i;

    for (int j = 1; j <= columns; j++)
    {
        cout << right << setw(7) << 1.0 / (i + j);
    } 
    
    cout << endl;
}



return 0;
}