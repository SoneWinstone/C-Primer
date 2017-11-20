#include <iostream>
#include <vector>
/**
 * 编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代器将所有元素的值变为原来的两倍。
 */
using namespace std;
void showVector(vector<int> vector);

void doubleTime(std::vector<int>& vector);

int main() {
    vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    doubleTime(ivec);
    showVector(ivec);
    return 0;
}

/**
 * 注意：这里需要传递vector引用
 */
void doubleTime(std::vector<int>& vector){
    for (auto begin = vector.begin(); begin != vector.end(); ++begin) {
        *begin *= 2;
    }
}

void showVector(std::vector<int> vector){
    for (auto begin = vector.cbegin(); begin != vector.cend(); ++begin) {
        cout << *begin << " ";
    }
    cout << endl;
}