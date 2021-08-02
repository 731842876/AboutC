#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : vptr
// @Author    : ATLAS
// @brief     : 每个使用虚函数的类（或者从使用虚函数的类派生）都有自己的虚拟表(vtable)。
// @Time      : 2021/7/23 17:55:15



//创建类实例的时候编译前会添加一个指针vptr，指向基类的虚拟表
//这可能解释了空类sizeof的结果为1，因为只含有1个vptr指针
class Base
{
public:
    Base() {};
    virtual void fun1()
    {
        cout << "Base::fun1()" << endl;
    }
    virtual void fun2()
    {
        cout << "Base::fun2()" << endl;
    }
    virtual void fun3() {}
    ~Base() {};
};


class Derived : public Base
{
public:
    Derived() {};
    void fun1()
    {
        cout << "Derived::fun1()" << endl;
    }
    void fun2()
    {
        cout << "DerivedClass::fun2()" << endl;
    }
    ~Derived() {};
};


//int main() {
//
//}