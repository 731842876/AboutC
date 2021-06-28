#include <iostream>
using namespace std;


// @File      : ImplementAbstractClass
// @Author    : ATLAS
// @brief     : 抽象类的实现
// @Time      : 2021/6/28 17:57:40


class A {

public:
	virtual void show() = 0;
	
	//构造、析构函数不能调用纯虚函数
	A() {}

	//抽象类中，成员函数可以调用纯虚函数
	void useShow() {
		this->show();
	}
};

//从抽象类派生而来，必须实现所有纯虚函数，才能成为非抽象类进行初始化
class B:public A
{
public:
	void show() {
		cout << " B show " << endl;
	}


};


//int main() {
//	B b;
//	b.show();
//}