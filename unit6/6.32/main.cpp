#include <iostream>

int & get(int* array, int index) { return array[index]; }

int main() {
    int ia[10];
    for (int i = 0; i < 10; i++) {
        // 函数作为左值
        get(ia, i) = i;
    }
    for (const int & num : ia) {
        std::cout << num << " ";
    }
    return 0;
}