#include <iostream>
#include <vector>
#include <list>
/*
 * 将ia拷贝到一个vector和一个list中。从list中删除奇数，从vector中删除偶数。
 */
using namespace std;

int main() {
    int ia[] {0, 1, 1, 2, 3, 5, 6, 8, 13, 32, 59};
    list<int> li(begin(ia), end(ia));
    vector<int> vi(begin(ia), end(ia));

    auto beg = li.begin();
    while (beg != li.end()) {
        if (*beg % 2 == 1)
            beg = li.erase(beg);
        else
            ++beg;
    }
    auto beg1 = vi.begin();
    while (beg1 != vi.end()) {
        if (*beg1 % 2 == 0)
            beg1 = vi.erase(beg1);
        else
            ++beg1;
    }

    cout << "list<int> : " << endl;
    auto lib = li.cbegin();
    while (lib != li.cend()) {
        cout << *lib++ << " ";
    }
    cout << endl;

    cout << "vector<int> : " << endl;
    auto vib = vi.cbegin();
    while (vib != vi.cend()) {
        cout << *vib++ << " ";
    }
    cout << endl;

    return 0;
}