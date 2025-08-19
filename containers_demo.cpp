// containers_demo.cpp
// Clear, minimal examples showing basic differences between four containers.
// This version uses `using namespace std;` and focuses on simple, easy-to-read
// terminal output. It avoids deep discussion of pointers or memory.

#include <algorithm>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <string>
#include <vector>

using namespace std;

int main() {
    cout << '\n';
    cout << "--- Containers quick demo (clean output) ---\n\n";

    // VECTOR: like a dynamic array. Good for fast access by index and for sorting.
    cout << "VECTOR: fast index access, good for lists you iterate or sort\n";
    vector<int> v = {30, 10, 20};
    cout << "  original: "; for (int x : v) cout << x << ' '; cout << '\n';
    sort(v.begin(), v.end());
    cout << "  sorted:   "; for (int x : v) cout << x << ' '; cout << "\n\n";

    // LIST: sequence you can insert or remove from easily when working element-by-element.
    cout << "LIST: good when you add/remove items in the middle without needing indexes\n";
    list<string> names = {"Alice", "Carol", "Eve"};
    cout << "  start: "; for (auto &s : names) cout << s << ' '; cout << '\n';
    names.push_front("Zoe"); // simple add at front
    names.push_back("Tom");  // simple add at back
    cout << "  after adds: "; for (auto &s : names) cout << s << ' '; cout << "\n\n";

    // MAP: key -> value pairs. Keys are kept in order. Use when you want to look up by name.
    cout << "MAP: key->value (ordered by key). Good for name->value lookups\n";
    map<string,int> score;
    score["Alice"] = 93;
    score["Bob"] = 82;
    score["Charlie"] = 88;
    cout << "  scores (by name):\n";
    for (const auto &p : score) cout << "    " << p.first << " : " << p.second << '\n';
    cout << '\n';

    // SET: ordered collection of unique items. Good for membership checks and sorted keys.
    cout << "SET: unique, sorted items. Good for membership or ordered keys\n";
    set<int> ids = {101, 202, 303};
    ids.insert(202); // duplicate ignored
    ids.insert(404);
    cout << "  ids: "; for (int i : ids) cout << i << ' '; cout << '\n';
    cout << "  contains 303? " << (ids.count(303) ? "yes" : "no") << "\n\n";

    cout << "--- Summary ---\n";
    cout << "  vector: best for index access and tight loops\n";
    cout << "  list:   best when you add/remove elements often and don't need indexes\n";
    cout << "  map:    store key->value pairs with keys kept in order\n";
    cout << "  set:    keep unique sorted keys, fast to test membership\n";
    cout << '\n';


    return 0;
}
