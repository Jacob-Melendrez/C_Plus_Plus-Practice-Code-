#include <iostream>
using namespace std;

void PrintCapital(string capitalName, string regionName) {
    cout << capitalName << " is " << regionName << "'s capital." << endl;
}

int main() {

string name1;
string name2;
string region1;
string region2;

cin >> name1;
cin >> name2;
cin >> region1;
cin >> region2;

PrintCapital(name1, region1);
PrintCapital(name2, region2);

return 0;
}