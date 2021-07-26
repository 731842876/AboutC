#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : 虚函数中默认参数
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/7/23 17:46:11

class Base
{
public:
    virtual void fun(int x = 10)
    {
        cout << "Base::fun(), x = " << x << endl;
    }
};

class Derived : public Base
{
public:
    virtual void fun(int x = 20)
    {
        cout << "Derived::fun(), x = " << x << endl;
    }
};

//int main() {
//
//    Derived d;
//    Base* b = &d;
//
//    //默认参数调用取决于指针本身的类型，而不是指向的对象类型。
//    b->fun();
//}