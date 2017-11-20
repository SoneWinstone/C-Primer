#include <iostream>
/**
 * 判断下列定义推断出的类型是什么，然后编写程序进行验证
 */
int main() {
    const int i = 42;
    auto j = i; // int
    const auto &k = i;  // 整型的常量引用
    auto *p = &i;   // 指向整型常量的指针
    const auto j2 = i, &k2 = i; // j2整型常量 k2整型常量引用

    return 0;
}