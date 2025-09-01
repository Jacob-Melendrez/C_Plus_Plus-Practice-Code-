/*
The charge of a capacitor is given by capacitorCharge = (electricCapacitance / electricVoltage)
Read double variables electricCapacitance and electricVoltage from input, respectively. 
Then, compute capacitorCharge using the formula. 
Finally, output "Capacitor charge is " followed by the value of capacitorCharge to five digits after the decimal point. 
End with a newline.

Ex: If the input is 5.0 12.0, then the output is:

Capacitor charge is 0.41667
*/

#include <iostream> 
#include <iomanip>
using namespace std;

int main() {

float electricCapacitance;
float electricVoltage;
float capacitorCharge;

    cout << "\n";
    cout << "Enter the electric capacitance: " << endl;
cin >> electricCapacitance;
    cout << "\n";
    cout << "Enter the electric voltage: " << endl;
cin >> electricVoltage;
    cout << "\n";

capacitorCharge = (electricCapacitance / electricVoltage);

    cout << "Capacitor charge is " << fixed << setprecision(5) << capacitorCharge << endl;
    cout << "\n";

return 0;
}