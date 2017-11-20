#include <iostream>
/**
 * 练习1.16：编写程序，从cin读取一组数，输出其和。
 */
int main() {
    std::cout << "Enter some digital until Ctrl+D:";
    int number, sum = 0;
    while (std::cin >> number) {
        sum += number;
    }
    std::cout << "sum: " << sum << std::endl;
    return 0;
}