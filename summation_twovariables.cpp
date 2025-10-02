#include <iostream> 
using namespace std;

int main() {

long sum(0);
int n(0);

cout << "Enter max value of i: ";
cin >> n;

for (int i = 1; i <= n; i ++)
{
    for (int j = 1; j <= i; j++)
    {
        sum += i - j;
    }
}

cout << "sum = " << sum << endl;

return 0;
}