#include <iostream>
using namespace std;
/**
 * 从标准输入读取两个数，得到两个数相除的结果。被除数为0报异常并处理。
 */
int main() {
    int a = 0, b = 0, rst;
    cin >> a >> b;
    do {
        try {
            if (0 == b) {
                throw runtime_error("math error");
            }
        } catch (runtime_error error) {
            cout << error.what() << endl;
            cout << "input b again:";
            cin >> b;
            continue;
        }
        break;
    } while(true);
    rst = a / b;
    cout << a << " / " << b << " = " << rst << endl;
    return 0;
}