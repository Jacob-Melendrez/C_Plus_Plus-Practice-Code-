#include <iostream>
using namespace std;

int main() {
    int deerWeight = 53;
	int turtleWeight = 76;
	int numDeer;
	int numTurtles;
	int totalWeight;

cout << "Enter number of deer: " << endl;
	cin >> numDeer;

cout << "Enter number of turtles: " << endl;
	cin >> numTurtles;

totalWeight = (deerWeight * numDeer ) + (turtleWeight * numTurtles);

cout << "Total Weight = " << totalWeight << endl;

return 0;
}