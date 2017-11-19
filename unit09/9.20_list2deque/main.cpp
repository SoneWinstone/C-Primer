#include <iostream>
#include <deque>
#include <list>
/*
 * 从一个list<int>中拷贝元素到两个deque中。值为偶数的放到一个里，值为奇数的放到另一个deque中。
 */
using namespace std;

template <typename T>
void print(deque<T>& deq) {
    auto beg = deq.cbegin();
    while (beg != deq.cend()) {
        cout << *beg++ << " ";
    }
    cout << endl;
}

int main() {
    list<int> li;
    deque<int> evenNumDeq;
    deque<int> oddNumDeq;
    for (int i = 0; i < 100; ++i) {
        li.push_back(i);
    }

    auto beg = li.cbegin();
    while (beg != li.cend()) {
        if (*beg % 2 == 0)
            oddNumDeq.push_back(*beg);
        else
            evenNumDeq.push_back(*beg);
        beg++;
    }

    cout << "even number deque: \n\t";
    print(evenNumDeq);
    cout << "odd number deque: \n\t";
    print(oddNumDeq);
    return 0;
}