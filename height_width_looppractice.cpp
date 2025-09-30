#include <iostream>
using namespace std;

//Outputs a rectangle with associated user input of height and width.

int main() {

int height(0);
int width(0);
int i(1);

cout << "Enter height and width." << endl;
cin >> height >> width;

while (i <= height)
{
    int j(1);
    while (j <= width)
    {
        cout << "*";
        j++;
    }
    cout << endl;
    i++;
}
return 0;
}