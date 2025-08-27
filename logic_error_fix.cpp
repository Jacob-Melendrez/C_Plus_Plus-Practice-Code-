/* ORIGINAL CODE WITH LOGIC ERROR

#include <iostream>
using namespace std;

// This program has a bug that causes a logic error. 
// Can you find the bug?
int main() {
   int numBeans;
   int numJars;
   int totalBeans;

   numBeans = 500;
   numJars = 3;
   
   cout << numBeans << " beans in ";
   cout << numJars  << " jars yields ";
   totalBeans = numBeans * numJars; 
   cout << "totalBeans" << " total" << endl;
   
   return 0;
}


*/
 
// MODIFIED CODE WITH CORRECT LOGIC 
#include <iostream>
using namespace std;

// This program has a bug that causes a logic error. 
// Can you find the bug?
int main() {
   int numBeans;
   int numJars;
   int totalBeans;

    cout << "Give me a number of beans per glass jar. " << endl;
    cout << '\n';
cin >> numBeans;
    cout << "Now, give me a number of jars. " << endl;
    cout << '\n';
cin >> numJars;
   
   totalBeans = numBeans * numJars;
   
   cout << numBeans << " beans in 1 jar yields ";
   cout << totalBeans << " in ";
   cout << numJars << endl;
    cout << '\n';

   return 0;
}
