#include <iostream>
#include <vector>
#include "Sales_item.h"

/**
 * 练习1.20:用Sales_item.h 编写一个程序，读取一组书籍销售记录，将每条记录打印到标准输出上。
 */
int main() {
    std::vector<Sales_item> vector;
    Sales_item sales_item;
    while (std::cin >> sales_item) {
        vector.push_back(sales_item);
    }
    std::vector<Sales_item>::iterator iterator = vector.begin();
    auto start = vector.begin();
    for (;start < vector.end(); start++) {
        std::cout << *start << std::endl;
    }
    for (Sales_item item : vector) {
        std::cout << item << std::endl;
    }
    vector.clear();
    return 0;
}