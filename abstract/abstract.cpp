#include <iostream>
using namespace std;


// @File      : abstract
// @Author    : ATLAS
// @brief     : 纯虚函数为没有具体实现，虚函数不一定有具体实现。
// @Time      : 2021/6/28 17:57:40


//包含了纯虚函数的类为抽象类，因为纯虚函数没具体实现，类也无法初始化对象。
class test {

public:
	//通过赋值为0来声明纯虚函数
	virtual void show() = 0;
};
//int main() {
//	
//	//test a;//抽象类无法初始化对象
//	test* a1;//可初始化指针
//}