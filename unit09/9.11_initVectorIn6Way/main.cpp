#include <iostream>
#include <vector>
/**
 *对6种创建和初始化vector对象的方法，每一种都给出一种实例。
 */
using namespace std;

template <typename T> void print(vector<T> vec);

int main() {
    vector<int> a;  // 空vector
    vector<int> b{1, 2, 3}; // 包含1,2,3 // b = {1, 2, 3}
    vector<int> c(b); // 同上 // c = b
    vector<int> d(++c.begin(), c.end()); // 2,3
    vector<int> e(10); // 10个0
    vector<int> f(10, 1); // 10个1

    print(a);
    print(b);
    print(c);
    print(d);
    print(e);
    print(f);

    return 0;
}

template<typename T>
void print(vector<T> vec) {
    auto begin = vec.cbegin();
    while (begin != vec.cend()) {
        cout << *begin++ << " ";
    }
    cout << endl;
}