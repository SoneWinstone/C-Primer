#include <iostream>
/**
 * 编写一个函数，使其交换两个int指针。
 */
void changeIntPointer(int *&, int *&);

int main() {
    int a = 10, b = 20;
    int *p1 = &a, *p2 = &b;
    changeIntPointer(p1, p2);
    std::cout << "*p1 = " << *p1 << ", *p2 = " << *p2 << std::endl;
    return 0;
}

void changeIntPointer(int *&p1, int *&p2) {
    int *temp = p1;
    p1 = p2;
    p2 = temp;
}
