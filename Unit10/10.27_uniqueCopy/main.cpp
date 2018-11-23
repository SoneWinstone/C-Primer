/**
 * 使用unique_copy讲一个vector中不重复的元素拷贝到一个list中。
 */
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;
int main() {
    list<int> li;
    vector<int> vi {1, 1, 2, 3, 4, 4, 5, 6, 7, 7, 8, 9};
//    unique_copy(vi.begin(), vi.end(), back_inserter(li));
    unique_copy(vi.begin(), vi.end(), inserter(li, li.begin()));
    /**
     * insert(c, pos) 每次插到pos的前面 pos始终是相对于最开始的c的位置
     */
    cout << li.size() << endl;
    for (auto beg = li.cbegin(); beg != li.cend(); ++beg) {
        cout << *beg << " ";
    }
    return 0;
}