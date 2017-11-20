#include <iostream>
#include <vector>

void adjoin(std::vector<int> vector);

void frontAndBack(std::vector<int> vector);

/**
 * 读入一组整数并把它们存入一个vector对象，将每对相邻整数的和输出出来。
 * 改写程序，要求先输出第一个个最后一个元素的和，接着输出第二个和倒数第二个元素的和，以此类推。
 */
int main() {
    using namespace std;
    cout << "input some numbers:" << endl;
    vector<int> ivec;
    int n;
    while (cin >> n) {
        ivec.push_back(n);
    }
    adjoin(ivec);
    frontAndBack(ivec);
    return 0;
}

void frontAndBack(std::vector<int> ivec) {
    using namespace std;
    for (decltype(ivec.size()) i = 0; i < (ivec.size() + 1) / 2; ++i) {
        if (i != ivec.size() - i - 1)
            cout << ivec[i] + ivec[ivec.size() - i - 1] << " ";
        else
            cout << ivec[i] << " ";
    }
    cout << endl;
}

void adjoin(std::vector<int> ivec) {
    using namespace std;
    for (decltype(ivec.size()) i = 0; i < ivec.size(); ++i) {
        if (i % 2 == 0) {
            if (i + 1 < ivec.size())
                cout << ivec[i] + ivec[i+1] << " ";
            else
                cout << ivec[i] << " ";
        }
    }
    cout << endl;
}