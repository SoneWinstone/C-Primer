#include <iostream>
#include <vector>
/**
 * 编写函数，接收一对指向vector<int>的迭代器和一个int值。在两个迭代器指定的范围中查找给定的值，返回一个布尔值来指出是否找到。
 */
using namespace std;
bool findIntInVec(vector<int>::iterator begin, vector<int>::iterator end);
vector<int>::iterator findIntInVec2(vector<int>::iterator begin, vector<int>::iterator end);

int main() {

    return 0;
}

bool findIntInVec(vector<int>::iterator begin, vector<int>::iterator end) {
    return false;
}

vector<int>::iterator findIntInVec2(vector<int>::iterator begin, vector<int>::iterator end) {
    return std::vector<int>::iterator();
}