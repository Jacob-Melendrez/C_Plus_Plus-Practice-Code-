#include <iostream> 
using namespace std;

int main() {

int height;
int width;
int i;
int j;

cout << "Enter height and width." << endl;
cin >> height >> width;

for (i = 1; i <= height; i++)
{
    for (j = 1; j <= width; j++)
    {
        cout << "*";
    }
    
    cout << endl;
}


return 0;
}