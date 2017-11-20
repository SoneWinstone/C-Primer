#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vi{1, 2, 3, 4, 5};
    int sum = accumulate(vi.cbegin(), vi.cend(), 0);
    cout << "sum = " << sum << endl;

    /*
     * 第三个参数如果类型比容器类型小 double->int 会发生精度损失
     */
    vector<double> vd{1.1, 2.2, 3.3, 7.7, 8.8, 9.9};
    sum = accumulate(vd.cbegin(), vd.cend(), 0);
    cout << "sum = " << sum << endl;

    double dsum = accumulate(vd.cbegin(), vd.cend(), 0.0);
    cout << "double sum = " << dsum << endl;
    return 0;
}