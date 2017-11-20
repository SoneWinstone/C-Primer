#include <iostream>

/**
 * 练习2.33：利用本节定义的变量，判断下列语句的运行结果
 */
int main() {
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    const auto f = ci;
    auto &g = ci;
    std::cout << "a = " << a << std::endl;
    a = 42;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    b = 42;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    c = 42;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    // d = 42; // d是一个指向int的指针
    // std::cout << "a = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    // e = 42; // e是一个const的整形指针
    // std::cout << "a = " << e << std::endl;
    std::cout << "g = " << g << std::endl;
    // g = 42; // g是对整形常量的引用
    // std::cout << "a = " << g << std::endl;
    return 0;
}