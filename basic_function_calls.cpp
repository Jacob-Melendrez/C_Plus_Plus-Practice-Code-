#include <iostream> 
#include <cmath> 
using namespace std;

int main()  {

double a = 81.0;
double b = sqrt(a);
double c = sqrt(sqrt(a) * b) * b;

cout << "What are the values of a, b and c after these different assignments? Enter your answers as decimal values." << endl;
cin >> a >> b >> c;

if (a == 81.0)
{
    cout << "\n";
    cout << "Value for a is Correct!" << endl;
    cout << "\n";
}

else 
{
    cout << "\n";
    cout << "Value for a is Incorrect";
    cout << "\n";
};

if (b == 9.0)
{
    cout << "\n";
    cout << "Value for b is Correct!" << endl;
    cout << "\n";
}

else 
{
    cout << "\n";
    cout << "Value for b is Incorrect";
    cout << "\n";
};

if (c == 81.0)
{
    cout << "\n";
    cout << "Value for c is Correct!" << endl;
    cout << "\n";
}

else 
{
    cout << "\n";
    cout << "Value for c is Incorrect";
    cout << "\n";
};

cout << "\n";
cout << "Answer for a = " << static_cast<double>(a) << endl;
cout << "Answer for b = " << static_cast<double>(b) << endl;
cout << "Answer for c = " << static_cast<double>(c) << endl;
cout << "\n";

return 0;
}