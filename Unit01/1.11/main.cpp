#include <iostream>

/**
 * 练习1.11：编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数。
 */
int main() {
    int start, end, temp, sum = 0;
    std::cout << "Input two number: ";
    std::cin >> start >> end;
    if (start > end) {
//        int temp = end;
//        end = start;
//        start = temp;
        /**
         * 效率最高，不需要临时变量，且不会溢出
         */
        start = start ^ end;
        end = start ^ end;
        start = start ^ end;
    }
    temp = start;
    while (temp <= end) {
        sum += temp++;
    }
    std::cout << start << " to " << end << " : " << sum << std::endl;
    return 0;
}