#include <iostream>
#include <vector>
/**
 * 编写一个递归函数，输出vector的内容
 */

template <typename T>
void printVector(std::vector<T> vec) {
    for (const T &t : vec) {
        std::cout << t << " ";
    }
    std::cout << std::endl;
}

/**
 * 递归方法输出vector内容
 * @tparam T 泛型参数
 * @param vec 需要输出的vector
 */
template <typename T>
void printV(std::vector<T> vec) {
    static unsigned int index = 0;
    if (vec.empty())
        return;
    std::cout << vec[index++] << " ";
    if (index == vec.size()) {
        // 让index恢复为0 否则函数下次调用将会出错
        index = 0;
        std::cout << std::endl;
        return;
    } else {
        printV(vec);
    }
}

int main() {
    std::vector<int> v{1, 2, 3, 4, 5};
    printVector(v);
    printV(v);
    return 0;
}