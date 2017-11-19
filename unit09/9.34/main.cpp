#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> vi{1, 2, 3};
    auto iter = vi.begin();
    while (iter != vi.end()) {
        if (*iter % 2)
            // 会一直在这里循环
            iter = vi.insert(iter, *iter);
        ++iter;
    }

    auto beg = vi.cbegin();
    while (beg != vi.cend()) {
        cout << *beg++ << " ";
    }
    cout << endl;
    return 0;
}