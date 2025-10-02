#include <iostream>
using namespace std;

int main() {

int sum(0);
cout << "\n";

for (int i = 1; i <= 10; i++)
{
    cout << "Enter the value of k: "; 
        int k;
        cin >> k;
        sum += k;
}

cout << "The sum of each k input 10 times from the user is: " << sum << endl;

return 0;
}