#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : vptr
// @Author    : ATLAS
// @brief     : ÿ��ʹ���麯�����ࣨ���ߴ�ʹ���麯�����������������Լ��������(vtable)��
// @Time      : 2021/7/23 17:55:15



//������ʵ����ʱ�����ǰ�����һ��ָ��vptr��ָ�����������
//����ܽ����˿���sizeof�Ľ��Ϊ1����Ϊֻ����1��vptrָ��
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