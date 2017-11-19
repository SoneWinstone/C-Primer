#ifndef _PERSON_H_
#define _PERSON_H_
#include <iostream>
#include <string>
using namespace std;

class Person {
    // 初始化优先级 : 构造初始化列表 > 类内初始化 > 默认初始化
private:
    // 默认初始化
    string name;
    // 类内初始化
    string address = "don't know";

public:
    // 类内定义的函数默认是inline
    // 这里的两个函数都应该是const函数 因为不希望函数会修改类成员值
    const string getName() const { return name; }
    const string getAddress() const { return address; }

    // 具有默认行为的构造器
    Person() = default;
    // Person() {}
    // 构造初始化列表
    Person(const string& name, const string& address) : name(name), address(address) {}
    ~Person() {}

    // 友元函数 friend关键字只在类内声明时添加
    friend istream& operator>>(istream& is, Person& person);
    friend ostream& operator<<(ostream& os, const Person& person);
};
// 独立的友元函数声明
istream& operator>>(istream& is, Person& person);
ostream& operator<<(ostream& os, const Person& person);

istream& operator>>(istream& is, Person& person) {
    return is >> person.name >> person.address;
}

ostream& operator<<(ostream& os, const Person& person) {
    return os << "Person[" << person.name << ", " << person.address << "]";
}
#endif
