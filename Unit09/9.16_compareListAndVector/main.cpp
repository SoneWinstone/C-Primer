#include <iostream>
#include <vector>
#include <list>
/*
 * 比较list<int>和vector<int>
 */
using namespace std;
int main() {
    list<int> li{1, 2, 3};
    vector<int> vi{1, 2, 4};
    vector<int> temp(li.cbegin(), li.cend());
    cout << "li " << (temp<vi?"<":">") << " vi";
    return 0;
}