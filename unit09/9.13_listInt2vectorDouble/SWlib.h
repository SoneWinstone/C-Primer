#ifndef _SWLIB_H_
#define _SWLIB_H_

#include <vector>
#include <string>
#include <cstring>
#include <iostream>

class Test {

public:
    Test(int start, int end) : start(start), end(end) {}

    int end;
    int start;
};

class SWString {
    friend std::ostream& operator<<(std::ostream& out, const SWString& str);

private:
    unsigned int len;
    const char *str;

public:
    explicit SWString() : str(nullptr), len(0) {}
    explicit SWString(const char* str);

    unsigned int length();

    char* operator[](const Test& test);
};

template<typename T>
void print(std::vector<T> vec);

#endif