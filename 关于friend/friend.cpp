#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : friend
// @Author    : ATLAS
// @brief     : 友元提供了一种 普通函数或者类成员函数 访问另一个类中的私有或保护成员的机制。
// @Time      : 2021/7/26 10:42:31

//优点：提高了程序的运行效率。
//缺点：破坏了类的封装性和数据的透明性。

class A {
private:
	int count;
public:
	A(int c) :count(c) {}

	//在类声明的任何区域中声明，而定义则在类的外部。
	friend int GetCount(A& target);
};

int GetCount(A& target) {
	return target.count;
}

//友元类 类B是类A的友元，那么类B可以直接访问A的私有成员。

class father
{
public:
	father(int m):money(m){}
	friend class son;

private:
	int money;
};


class son
{
public:
	int GetMoney(father& f) {
		return f.money;
	}

};


int main() {
	A t(3);
	cout << GetCount(t) << endl;

	father f(1000);
	son s;
	cout << s.GetMoney(f) << endl;
	//友元关系没有继承性 假如类B是类A的友元，类C继承于类A，那么友元类B是没办法直接访问类C的私有或保护成员。
	//友元关系没有传递性 假如类B是类A的友元，类C是类B的友元，那么友元类C是没办法直接访问类A的私有或保护成员
}