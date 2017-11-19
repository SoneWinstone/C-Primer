#include <iostream>
#include "Account.h"
/**
 * 编写自己的银行账户类
 */
int main1() {
    using namespace std;

    Account account("winstone");
    double rate = Account::rate();
    cout << "rate : " << rate << endl;
    Account::setRate(22.22);
    cout << "rate : " << Account::rate() << endl;
    cout << "money : " << account.getMoney() << endl;
    account.saveMoney(10000);
    cout << "money : " << account.getMoney() << endl;

    return 0;
}