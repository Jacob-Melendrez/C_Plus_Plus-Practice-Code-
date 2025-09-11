#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std;

int main() {

int UC = rand() % (90 - 65 + 1) + 65;
char a;
char b; 

srand(time(0));
cout << static_cast<double>((rand() % 9 ) + 48);

a = static_cast<int>((rand() % 26) + 65);
cout << static_cast<char>(a);

b = static_cast<int>((rand() % 26) + 97);
cout << static_cast<char>(b);

// Without static cast. 
cout << "\t";

cout << char(UC);

cout << char(rand() % (122 - 97 + 1) + 97);

cout << char(rand() % (57 - 48 + 1) + 48);

return 0;
}