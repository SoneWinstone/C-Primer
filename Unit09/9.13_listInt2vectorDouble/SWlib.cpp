//
// Created by winstone on 2017/10/12.
//

#include "SWlib.h"
#include <typeinfo>

SWString::SWString(const char *str) {
    while(true) {
        if (str[this->len++] == '\0')
            break;
    }
    this->str = str;
}

std::ostream& operator<<(std::ostream& out, const SWString& str) {
    out << str.str;
    return out;
}

char *SWString::operator[](const Test& test) {
    int len;
    len = test.end - test.start + 1;
    static char temp[1024];
    strncpy(temp, &this->str[test.start], static_cast<size_t>(len - 1));
    temp[len - 1] = '\0';
    return temp;
}

unsigned int SWString::length() {
    return this->len;
}

// print vector
template<typename T>
void print(std::vector<T> vec) {
    auto begin = vec.cbegin();
    std::cout << "vector<" << typeid(vec).name() << ">(" << vec.size() << ")[";
    while (begin != vec.cend()) {
        std::cout << *begin++ << " ";
    }
    std::cout << "\b]" << std::endl;
}
