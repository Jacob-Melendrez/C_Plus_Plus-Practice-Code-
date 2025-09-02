#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int plumWeight1;
	int plumWeight2;
    int numStudents;
    double avgWeight;

cout << "\n";

cout << "Enter the weight of first plum: ";
    cin >> plumWeight1;
cout << "\n";

cout << "Enter the weight of second plum: ";
    cin >> plumWeight2;
cout << "\n";

cout << "Enter total number of students: ";
    cin >> numStudents;
cout << "\n";

avgWeight = (static_cast<double>(plumWeight1) + static_cast<double>(plumWeight2)) / static_cast<double>(numStudents);

cout << "Average weight of plums per student: " << fixed << setprecision(2) << avgWeight << endl;
cout << "\n";

return 0;
}