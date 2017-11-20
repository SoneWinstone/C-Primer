#include <iostream>

/**
 * 练习1.7：编译一个包含不正确的嵌套注释的程序，观察编译器返回的错误信息。
 */
int main() {
    /**
     * 这是一个/*错误*/的注释。
     */
    std::cout << "Hello, World!" << std::endl;
    return 0;
}