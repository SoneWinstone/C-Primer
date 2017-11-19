#include <iostream>
/**
 * 编写一个程序，使其接收参数并输出。
 */
int main(int argc, char ** argv) {
    std::cout << "out : \n\t";
    std::cout << argv[0];
    for (int i = 1; i < argc; i++) {
        std::cout << " " << argv[i];
    }
    std::cout << std::endl;
    return 0;
}