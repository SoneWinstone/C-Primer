#include <iostream>
/**
 * 编写一个函数声明，使其返回一个数组的引用并且该数组包含10个string对象
 */
using namespace std;
/**
 * 4种不同的函数声明方式
 */
// 一般声明
string (& getStrArrRef())[10];
// 使用类型别名声明 : 由C入门的程序员比较习惯于这种方式 更容易理解
typedef string (&strArr)[10];
strArr getStrArrRef2();
// 尾置声明 : C++11新特性 个人比较喜欢这种方式
auto getStrArrRef3() -> string (&)[10];
// decltype() 声明 : 比较麻烦 需要定义一个变量来声明类型
string s[10];
decltype(s) & getStrArrRef4();

int main() {
    for (const auto& str : getStrArrRef()) {
        cout << str << " ";
    }
    cout << "\n******************************" << endl;
    for (const auto& str : getStrArrRef2()) {
        cout << str << " ";
    }
    cout << "\n******************************" << endl;
    for (const auto& str : getStrArrRef3()) {
        cout << str << " ";
    }
    cout << "\n******************************" << endl;
    for (const auto& str : getStrArrRef4()) {
        cout << str << " ";
    }
    return 0;
}

string (& getStrArrRef())[10] {
    static string s[10] {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    return s;
}

strArr getStrArrRef2() {
    return getStrArrRef();
}

auto getStrArrRef3() -> string (&)[10] {
    return getStrArrRef();
}

decltype(s) & getStrArrRef4() {
    return getStrArrRef();
}