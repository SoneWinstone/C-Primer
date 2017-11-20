#include <iostream>
/*
 * 编写一个lambda，捕获一个局部int变量，并递减变量值，直至它变为0.
 */
using namespace std;
int main() {
    int x = 10;
    auto fun = [x] () mutable -> bool {
        if (x > 0) {
            --x;
            return true;
        } else
            return false;
    };
    while (fun()) ;
    cout << "fun() = " << fun() << endl;
    return 0;
}