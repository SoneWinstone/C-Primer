#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> vi{1, 2, 3};
//    auto it1 = vi.begin();
//    auto it2 = vi.begin();
    auto it1 = vi.end();
    auto it2 = vi.end();
    vi.erase(it1, it2);

    auto beg = vi.cbegin();
    auto end = vi.cend();
    while (beg != end) {
        cout << *beg++ << " ";
    }
    cout << endl;
    return 0;
}