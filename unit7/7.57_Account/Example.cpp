//
// Created by winstone on 2017/10/29.
//
#include <iostream>
#include "Example.h"

// double Example::rate = 6.5;
std::vector<double> Example::vec(vecSize);

int main() {
    Example e;
    std::vector<double> v = e.vec;
    std::cout << v.size() << std::endl;

    std::string s("你好");
    std::cout << s.length() << std::endl;
    std::cout << s.size() << std::endl;
    s = "ni";
    std::cout << s.length() << std::endl;
    std::cout << s.size() << std::endl;
    char * str = "ni";
    std::cout << str << std::endl;
    std::cout << sizeof(str) << std::endl;
}