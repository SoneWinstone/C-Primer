//
// Created by winstone on 2017/10/29.
//

#ifndef INC_7_57_ACCOUNT_EXAMPLE_H
#define INC_7_57_ACCOUNT_EXAMPLE_H

#include <vector>

class Example {
public:
    // 或者可以 static double rate; 然后在类外初始化
    static const int vecSize = 20;

    static constexpr double rate = 5.5;
    static std::vector<double> vec;

    int num = 10;
    int getNum() const {
        return this->num;
    }
};
#endif //INC_7_57_ACCOUNT_EXAMPLE_H
