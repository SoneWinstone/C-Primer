#include <iostream>
#include <bitset>
/**
 * 如果一台机器上int占32位、char占8位，用的是Latin-1字符集，其中字符‘q’的二进制形式是01110001，那么表达式~'q'<<6的值是什么？
 */
int main() {
    std::cout << std::bitset<sizeof(char)*8>('q') << std::endl;
    std::cout << std::bitset<sizeof(char)*8>(~'q') << std::endl;
    std::cout << std::bitset<sizeof(char)*8>((~'q' << 6)) << std::endl;
    return 0;
}