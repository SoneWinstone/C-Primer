#include <iostream>
#include <string>
#include <vector>
/*
 * 使用vector<char> 初始化一个string
 */
int main() {
    using namespace std;

    vector<char> vc{'a', 'b', 'c'};
    string s0(vc.begin(), vc.end());
    string s(vc.data());

    cout << "s: " << s << endl;

    return 0;
}