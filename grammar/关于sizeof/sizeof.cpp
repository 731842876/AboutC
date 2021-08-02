#include <iostream>
using namespace std;


// @File      : sizeof_
// @Author    : ATLAS
// @brief     : 关于sizeof的应用
// @Time      : 2021/6/28 17:57:40


//空类大小为1字节
class testA{};



//静态数据成员被编译器放在程序的一个global data members中，所以作为类的一个数据成员，但不影响类的大小。
//不管这个类产生了多少个实例，还是派生了多少新的类，静态数据成员只有一个实例。
//静态数据成员，一旦被声明，就已经存在。
class testB{
public:
	char b; //8
	virtual void fun() {};//8
	static int c;
	static int d;
	static int f;
};

//一个虚指针大小64位8，32位4
//无论多少个虚函数，都只有一个指针大小
class testC
{
public:
	virtual void fun();
	virtual void fun1();
	virtual void fun2();
	virtual void fun3();

};



class Animal {
public:
	char a;
	int b;
};

class dog :public Animal {

public:
	short a;
	long long b;
};




class D
{
public:

	virtual void f1(){}
};

//虚函数也会继承，大小为
class C:public D
{
	//virtual void f2() {}
};



//int main() {
//	
//	
//	cout << sizeof(testA) << endl;
//
//	cout << sizeof(testB) << endl;
//	
//	cout << sizeof(testC) << endl;
//
//
//	cout << sizeof(Animal) << endl;
//	cout << sizeof(dog) << endl;
//
//	cout << sizeof(C) << endl;
//
//	
//	return 0;
//}