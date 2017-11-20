#include <iostream>
#include <vector>
/**
 * 编写一段程序，比较两个数组是否相等。
 * 在写一段程序，比较两个vector对象是否相等。
 */
using namespace std;
int main() {
    int arr1[] {1, 2, 3, 4, 5};
    int arr2[] {1, 2, 4, 3, 5};
    vector<int> ivec1 {1, 2, 3, 4, 5};
    vector<int> ivec2 {1, 2, 4, 3, 5};
    int flag = 0;
    for (int i = 0; i < sizeof(arr1); ++i) {
        if (arr1[i] < arr2[i]) {
            flag = -1;
            break;
        } else if (arr1[i] > arr2[i]) {
            flag = 1;
            break;
        }
    }
    cout << flag << endl;
    cout << (ivec1 < ivec2) << endl;
    return 0;
}