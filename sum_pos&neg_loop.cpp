#include <iostream> 
using namespace std; 

int main() {

int negtot(0), postot(0), k;
cout << "\n";

for (int i = 1; i <= 10; i++)
{
    cout << "Enter an integer (Positive or Negative): ";
    cin >> k;
    if (k < 0)
    {
        negtot += k;
    }
    else 
    {
        postot += k;
    }
}
cout << "Negative total is: " << negtot << endl;
cout << "Positive total is: " << postot << endl;
cout << "Total of all ten values equals: " << negtot + postot << endl;

return 0; 
}