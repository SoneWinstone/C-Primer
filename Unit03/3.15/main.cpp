#include <iostream>
#include <string>
#include <vector>
/**
 * 编写一个程序，用cin读入一组字符串并把他们存入一个vector对象
 */
int main() {
    std::vector<std::string> svec;
    std::string word;
    while (std::cin >> word) {
        svec.push_back(word);
    }
    for (std::string s : svec) {
        std::cout << s << std::endl;
    }
    return 0;
}