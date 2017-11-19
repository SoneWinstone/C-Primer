#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <string>

class Account {
private:
    std::string countName;
    double money;

public:
    // 委托构造函数 会先执行完受委托构造函数的初始化及构造函数的内容在执行此构造函数的内容
    explicit Account(const std::string& name) : Account(name, 0) {}
    Account(const std::string& name, const double money) : countName(name), money(money) {}
    void saveMoney(double money);
    double getMoney();

    static double interestRate;
    static void setRate(double);
    static double rate();
};

double Account::getMoney() {
    return money * interestRate;
}

double Account::interestRate = 11.11;

double Account::rate() {
    return interestRate;
}

void Account::setRate(double rate) {
    Account::interestRate = rate;
}

void Account::saveMoney(double money) {
    this->money += money;
}

#endif //_ACCOUNT_H_