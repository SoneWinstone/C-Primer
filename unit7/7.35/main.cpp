#include <iostream>

using namespace std;
typedef string Type;

Type initVal() {
    cout << "outer : " << __func__ << endl;
}

class Exercise {
public:
    typedef int Type;
    Type setVal(Type);
    Type initVal();

private:
    int val;
};

Exercise::Type Exercise::setVal(Exercise::Type parm) {
    val = parm + initVal();
    return val;
}

Exercise::Type Exercise::initVal() {
    cout << "Exercise : " << __func__ << endl;
    return 1;
}

int main() {
    Exercise e;
    e.setVal(1);
    return 0;
}