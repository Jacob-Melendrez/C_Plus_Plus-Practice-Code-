#include <iostream> 
using namespace std;

int main() {

int sum(0), n(0);

cout << "\n";
cout << "Enter number of terms: ";
cin >> n; 

for (int i = 1; i <= n; i++)
{
    sum += i * i * i;
}
cout << "1^3 + 2^3 + 3^3 + ... + " << n << "^3 = " << sum << endl; 

return 0;
}