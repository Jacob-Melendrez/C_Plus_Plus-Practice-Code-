//Anything with include is a header files which is similar to an import statement. 
#include <iostream>
    // Allows program to use cin and cout functions. (Input and outputs)
#include <vector>
    // Used for dynamic arrays. 
#include <string>
    // String class for supporting text manipulation. 

using namespace std;
// Tells compiler to use the standard namespace.
// Used to avoid naming conflicts.

int main()
{
    cout << "                    " << endl;
    
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};


    for (const string & word : msg)
    {
        cout << word << " ";
        //Outputs all words to terminal. Loops through each element in array and adds " " between each word.
    }
    cout << '\n' << '\n'; 
    // Print two new lines for cleaner output
}
