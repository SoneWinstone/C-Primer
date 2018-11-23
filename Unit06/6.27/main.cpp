#include <iostream>
/**
 * 编写一个函数，它的参数是initializer_list<int>类型的对象，函数的功能是计算列表中所有元素的和。
 */
int sum(std::initializer_list<int> list) {
    int sum = 0;
    for (const auto &elem : list) {
        sum += elem;
    }
    return sum;
}

int main() {
    int total = sum({1, 2, 3, 4, 5});
    std::cout << "total = " << total << std::endl;
    return 0;
}