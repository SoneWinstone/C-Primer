#include <iostream>
#include <string>
#include <deque>
#include <list>
/*
 * 从标准输入读取string序列，放入deque中，并打印出来。
 */
using namespace std;
int main() {
    string temp;
//    deque<string> ds;
    list<string> ds;
    while (getline(cin, temp)) {
        ds.push_back(temp);
    }

    auto beg = ds.cbegin();
    while (beg != ds.cend()) {
        cout << *beg++ << endl;
    }
    return 0;
}