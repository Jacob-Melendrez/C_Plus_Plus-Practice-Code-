#include <iostream>
using namespace std;

int main() {

int negtot(0), postot(0), k;
cout << "\n";

cout << "Enter a number: ";
cin >> k;

while (k != 0)
{
    if (k < 0)
    {
        negtot += k;
    }
    else 
    {
        postot += k;
    }
    cout << "Enter a number: ";
    cin >> k;
}

cout << "Negative total is " << negtot << endl;
cout << "Positive total is " << postot << endl;
cout << "Total of all values equals: " << negtot + postot << endl;

return 0;
}