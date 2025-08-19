#include <iostream>
using namespace std;

// Main function - execution starts here.
int main() {

//Initial output statement in terminal. 
        cout << "Enter three integers: ";
        cout << "                          " << endl;

//Variables 
    int x, y, z;

// Read input from user.
        cin >> x >> y >> z;   // Waits for reponse from user. 
// If the read did not succeed, stop with error code 1.
// '!' is equivalent to cin.fail(): it returns true if the previous input operation failed.
            if (!cin) {
                return 1;
             }
// Output the read values.
        cout << "                          " << endl;
        cout << x << ' ' << y << ' ' << z << '\n';
}
