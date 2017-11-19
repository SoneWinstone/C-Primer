#include <iostream>
#include <vector>
#include <list>
#include <typeinfo>
#include "SWlib.h"
/**
 * 用list<int>、vector<int>初始化一个vector<double>
 */
using namespace std;

template<typename T>
void print(std::vector<T> vec) {
    auto begin = vec.cbegin();
    std::cout << "vector<" << typeid(*vec.begin()).name() << ">(" << vec.size() << ")[";
    while (begin != vec.cend()) {
        std::cout << *begin++ << " ";
    }
    std::cout << "\b]" << std::endl;
}


int main() {
    vector<int> vi{1, 2, 3};
    vector<double> vd(vi.cbegin(), vi.cend());
    list<int> li{2, 3, 4};
    vector<double> vd2(li.cbegin(), li.cend());

    print(vd);
    print(vd2);

    return 0;
}