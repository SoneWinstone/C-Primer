#include <iostream>

int main() {
    auto sum = [](int a, int b) { return a + b; };
    std::cout << sum(1, 1) << std::endl;

    int x = 10;
    auto add = [x](int y) { return x + y; };
    std::cout << add(5) << std::endl;

    return 0;
}