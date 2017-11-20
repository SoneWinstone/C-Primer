#include <iostream>

/**
 * 练习1.9：编写程序，使用while循环将50到100的整数相加。
 */
int main() {
    int sum = 0;
    int number = 50;
    while (number <= 100) {
        sum += number;
        ++number;
    }
    std::cout << "sum 50 to 100 : " << sum << std::endl;
    return 0;
}