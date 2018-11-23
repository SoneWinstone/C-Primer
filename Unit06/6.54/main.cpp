#include <iostream>
#include <vector>
/*
 * 编写函数的声明，令其接收两个int形参并且返回类型也是int：然后声明一个vector对象，令其元素是指向该函数的指针。
 * 编写4个函数，分别对两个int值执行加减乘除运算：在上一题创建的vector对象中保存指向这些函数的指针。
 */
using namespace std;
int add(int, int);
int Minus(int, int);
int multiply(int, int);
int divide(int, int);

int main() {
    typedef decltype(divide) *Func;
    vector<Func> funcVec;
    funcVec.push_back(&add);
    funcVec.push_back(&Minus);
    funcVec.push_back(&multiply);
    funcVec.push_back(&divide);
    int x = 10, y = 2, result = 0;
    for (auto func : funcVec) {
        result = func(x, y);
        cout << "result = " << result << endl;
    }
    return 0;
}

int add(int x, int y) {
    return x + y;
}

int Minus(int x, int y) {
    return x - y;
}

int multiply(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    return x / y;
}