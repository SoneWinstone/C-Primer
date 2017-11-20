#include <iostream>

/**
 * 练习1.8：指出下列哪些输出语句是合法的
 */
int main() {
    std::cout << "/*";  // 合法
    std::cout << "*/";  // 合法
    std::cout << /* "*/" */;    // 错误
    std::cout << /* "*/" /* "/*" */;    // 错误
    return 0;
}