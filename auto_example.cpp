#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    // Simple note: 'auto' means the computer figures out the variable's
    // type from the value you give it. Below each line shows the
    // deduced type and a tiny plain-English hint.
    auto x = 42;               // deduced type: int    -> whole number
    auto d = 3.14;             // deduced type: double -> number with decimals
    auto s = string("hello"); // deduced type: std::string -> text (a word or sentence)

    cout << "x (auto) = " << x << '\n';
    cout << "d (auto) = " << d << '\n';
    cout << "s (auto) = " << s << '\n';


    return 0;
}
