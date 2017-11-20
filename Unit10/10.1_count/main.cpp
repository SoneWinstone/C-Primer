#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main() {
    vector<int> vi{1, 2, 3, 4, 2, 3, 45, 5, 10, 2, 99};
    auto cnt = count(vi.cbegin(), vi.cend(), 2);
    cout << "count 2 in vi: " << cnt << endl;

    list<string> ls{"abc", "def", "abc", "ab"};
    long long int ret  = count(ls.cbegin(), ls.cend(), "abc");
    cout << "count 'abc' in ls: " << ret << endl;

    return 0;
}