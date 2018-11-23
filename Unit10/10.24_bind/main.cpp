/*
 * 给定一个string，使用bind和check_size在一个int的vector中查找第一个大于string长度的值。
 */
#include <vector>
#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;
using namespace std::placeholders;

bool check_size(int n, int size) {
    return n > size;
}

int main() {
    string str = "hello";
    vector<int> vi {0, 1, 2, 3, 4, 5, 6, 7, 8};
    auto index = find_if(vi.cbegin(), vi.cend(), bind(check_size, _1, str.length()));
    cout << "value = " << *index << endl;
    return 0;
}