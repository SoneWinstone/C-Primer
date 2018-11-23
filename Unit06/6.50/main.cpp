/**
 * 函数的最佳匹配
 */
void f() {}
void f(int x, int y) {}
void f(double x, double y) {}

int main() {
    // 错误的例子
    // f(1, 2.1);
    // f(1.1, 2);
    f(1.1, 2.2);
    return 0;
}