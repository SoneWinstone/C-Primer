#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
/**
 * 判断string长度大于5的函数
 * @param s string对象
 * @return 长度是否大于5
 */
bool moreThen5(const string& s) {
    return s.size() >= 5;
}

int main() {
    vector<string> vs{"asdfasdf", "asdf", "asdfwer", "34sdf2"};
    auto end = partition(vs.begin(), vs.end(), moreThen5);
    auto beg = vs.cbegin();
    while(beg != end) {
        cout << *beg++ << endl;
    }
    return 0;
}