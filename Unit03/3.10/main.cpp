#include <iostream>
#include <string>
#include <cctype>
/**
 * 编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分
 */
int main() {
    std::string str;
    getline(std::cin, str);
    std::string newStr;
    for (decltype(str.size()) i = 0; i < str.size(); ++i) {
        if (!std::ispunct(str[i]))
            newStr += str[i];
    }
    std::cout << newStr << std::endl;
    return 0;
}