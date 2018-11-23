#include <iostream>
#include "Person.h"
/**
 * 编写一个Person类，使其表示人员的姓名和住址(string类型)。
 */
using namespace std;

int main() {
    Person p("a", "b");
    cout << p.getName() << " : " << p.getAddress() << endl;
    if (cin >> p)
        cout << p;
    return 0;
}