#include <iostream>
/**
 * 默认构造函数
 */
using namespace std;
class A {
public:
    char ch;
    int num;
//    A(int num, char ch) : num(num), ch(ch) {}
};
int main() {
    A a;
    cout << "\'" << a.ch << "\':" << a.num << endl;
    return 0;
}