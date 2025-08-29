/* 

#include <iostream>
using namespace std;

int main() {

   int numMangos = 85;

   cout << numMangos << endl;

   return 0;
}

*/

/*
#include <iostream>
using namespace std;

int main() {
   int numKeyboards;
	int numMousepads;
   
   cin >> numKeyboards;

   numMousepads = numKeyboards;

   cout << numKeyboards << endl;
	cout << numMousepads << endl;
   
   return 0;
}

*/

/*
#include <iostream>
using namespace std;

int main() {
   int numStudents;

   cin >> numStudents;

numStudents = numStudents * 4;

   cout << numStudents << endl;
   
   return 0;
}

*/

#include <iostream>
using namespace std;

int main() {
   int numChairs;
   int numTables;
   int totalFurniture;

   cin >> numChairs;
	cin >> numTables;

numChairs = numChairs + 3;
numTables = numTables * 5;
totalFurniture = numChairs + numTables; 

   cout << numChairs << " chairs" << endl;
   cout << numTables << " tables" << endl;
   cout << totalFurniture << " total" << endl;
   
   return 0;
}
