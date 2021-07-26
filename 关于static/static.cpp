#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : static
// @Author    : ATLAS
// @brief     : 静态变量、静态类成员
// @Time      : 2021/7/23 2:13:06


void testStatic() {
	//变量声明为static时，内存空间将在程序的生命周期内只分配一次
	static int n = 0;
	//该变量并不会随着每次调用而初始化，方便用于存储某个运行状态。
	cout << n << endl;
	n++;
}


class A
{
public:

	void setCoutn(int c) {
		count = c;
	}
	void showCount() {
		cout << count << endl;
	}

	//静态成员函数只能访问景泰数据成员和其他静态成员函数
	static void say() {
		cout << "hey" << endl;
	}

private:
	
	static int count;
	//由于静态变量只初始化一次，所有类对象共享该静态变量
	//不同的对象不能有多个静态变量，所以在构造函数里不能初始化静态变量

	
};
//类中静态变量需要在类外进行初始化
int A::count = 10;


class B
{
public:
	B() {
		cout << "Creat" << endl;
	}
	~B() {
		cout << "Destroy" << endl;
	}

private:

};


//int main() {
//
//	for (int i = 0; i < 3; i++)
//		testStatic();
//
//
//	A a;
//	A b;
//
//	//类对象可以使用.来调用静态成员函数，但一般用类名解析调用，如下
//	A::say();
//
//
//	//多个对象共享同一个静态变量
//	a.setCoutn(20);
//	b.showCount();
//
//	if (1){
//		//b对象只存在于if周期内
//		B b;
//
//		//c对象贯穿整个程序生命周期
//		static B c;
//	}
//
//	cout << "main end" << endl;
//
//	
//}