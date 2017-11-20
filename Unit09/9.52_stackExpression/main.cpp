#include <iostream>
#include <string>
#include <stack>
#include <algorithm>

int get_exp_rst(const string& exp);

void push_to_stack(std::stack<int>& stack, std::stack<char>& op, const string& exp);

using namespace std;
int main() {
    string expression = "5 * (1 + 2) - 6 / (2 + 1)";

    int ret = get_exp_rst(expression);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

int get_exp_rst(const string& exp) {
    stack<char> stk_op;
    stack<int> stk_num;

    push_to_stack(stk_num, stk_op, exp);

    return 0;
}

void push_to_stack(std::stack<int>& stack, std::stack<char>& op, const string& exp){
    bool flag = false;
    bool isNum = false;
    auto beg = exp.cbegin();
    while (beg != exp.cend()) {
        if (isdigit(*beg)) {
            if (!isNum) {
                isNum = true;
                stack.push(stoi(string(beg, exp.cend())));
            }
            goto CONTINUE;
        } else {
            isNum = false;
            if (*beg == ' ') {
                goto CONTINUE;
            } else if (*beg == '(') {
                flag = true;
                auto len = find(beg, exp.cend(), ')');
//                exp.find(")", beg, exp.cend());
                stack.push(get_exp_rst(string(++beg, len)));
            } else if (*beg == ')') {
                flag = false;
            } else if (*beg == '+' || *beg == '-' || *beg == '*' || *beg == '/') {
                op.push(*beg);
            }
        }
CONTINUE:
        ++beg;
    }
}
