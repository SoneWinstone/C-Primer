#include <iostream>
/*
 * 编写一个函数，使用指针形参交换两个整数的值。在代码中调用该函数并输出交换后的结果，以此验证函数的正确性。
 */
void changeValueByPointer(int*, int*);
void changeValueByReference(int&, int&);

int main() {
    int a = 1, b = 2;
    int *pa = &a, *pb = &b;
    changeValueByPointer(pa, pb);
    std::cout << "changeValueByPointer -> " << *pa << " : " << *pb << std::endl;
    changeValueByReference(a, b);
    std::cout << "changeValueByReference -> " << a << " : " << b << std::endl;
    return 0;
}

void changeValueByPointer(int* pa, int* pb)
{
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}

void changeValueByReference(int &a, int &b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}