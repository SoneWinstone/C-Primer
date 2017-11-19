#include <iostream>
#include <string>

void replace(std::string& s, std::string oldStr, std::string newStr) {
    std::cout << s << std::endl;
    auto iter = s.erase(oldStr.begin(), oldStr.end());
    std::cout << s << std::endl;
    s.insert(iter, newStr.begin(), newStr.end());
    std::cout << s << std::endl;
}

int main() {
    using namespace std;

    string s = "ABthoCDthruEF";
    replace(s, "tho", "though");

    cout << s << endl;

    return 0;
}