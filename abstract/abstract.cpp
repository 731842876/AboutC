#include <iostream>
using namespace std;


// @File      : abstract
// @Author    : ATLAS
// @brief     : 纯虚函数没有具体实现，虚函数不一定有具体实现。
// @Time      : 2021/6/28 17:57:40


//包含了纯虚函数的类为抽象类，因为纯虚函数没具体实现，类也无法初始化对象
//抽象类至少包含一个纯虚函数
class A {

public:

	//构造、析构中不能调用纯虚函数
	//抽象类可以含有构造函数
	//构造函数不能是虚函数
	A(){}

	//通过赋值为0来声明纯虚函数
	virtual void show() = 0;
	
	//抽象类中，成员函数可以调用纯虚函数
	void useShow() {
		this->show();
	}

	//析构函数可以是虚函数，如基类指针指向派生类对象并进行删除时，如果基类不是虚析构，就只能调用基类的析构，而不是指向派生对象的析构。
	virtual ~A(){
		cout << "A del" << endl;
	}
};
//从抽象类派生而来，必须实现所有纯虚函数，才能成为非抽象类进行初始化
class B :public A
{
public:
	void show() {
		cout << " b show " << endl;
	}

	~B()
	{
		cout << "B del" << endl;
	}
};



//int main() {
//	//A a;抽象类不能初始化
//	A* a = NULL;
//
//	B b;
//	b.show();
//	cout << "调用一次析构" << endl;
//	
//
//	A* c = new B();
//	delete c;
//	cout << "调用二次析构" << endl;
//	
//}