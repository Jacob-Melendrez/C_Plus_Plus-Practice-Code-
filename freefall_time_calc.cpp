#include <iostream> 
#include <cmath> 
#include <iomanip>
using namespace std;

int main() {

int height;
double time;
double gravity(32.2);

    cout << "Enter height: ";
    cin >> height;

time = sqrt(2 * (height) / gravity);
    cout << "It will take " << time << " seconds to fall " << height << " feet." << endl;


return 0;
}