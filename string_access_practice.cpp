/*
#include <iostream>
#include <string>
using namespace std;

int main() {

    string inputString;

    getline(cin, inputString);

inputString.at(0) = 'C';

    cout << inputString << endl;

return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {

    string inputString;

    getline(cin, inputString);

if (inputString.at(0) == 't') {
    cout << "Matching" << endl;
}
else {
    cout << "Not matching" << endl;
}

return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string inputString;
	char suffix;

	getline(cin, inputString);
	cin >> suffix;

inputString = inputString + suffix;

    cout << inputString << endl;

return 0;
}