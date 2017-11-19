#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;
int main() {
    list<char *> lc{"string a", "string b", "string c"};
    vector<string> vs;
    vs.assign(lc.cbegin(), lc.cend());
    auto end = vs.cend();
    for (auto beg = vs.cbegin(); beg != end ; beg++) {
        cout << *beg << " " << ends;
    }
    return 0;
}