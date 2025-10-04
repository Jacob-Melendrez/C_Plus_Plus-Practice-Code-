#include <iostream> 
#include <iomanip>
using namespace std;

int main() {

int numRows(0);
int diff(0);

cout << "Enter number of table rows: ";
cin >> numRows;

int g = 1;

for (int z = 0; z < numRows; z++)
{
    if (z < 10)
    {
        cout << right << setw(9) << "Column " << right << setw(1) << g;
    }
    else {
        cout << right << setw(9) << "Column " << right << setw(2) << g;
    }
g++;
}
cout << "\n";
cout << endl;

cout.setf(ios::fixed);

for (int i = 1; i <= numRows; i++)
{
    for (int j = 1; j <= numRows; j++)
    {
        if (i != j)
        {
            diff = i + j;
            cout << "  " << 1.0 / (diff * diff);
        }
        else 
        {
            cout << "  ********";
        }
    }
    cout << endl;
}

return 0;
}