#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : 指针和引用
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/7/25 16:02:36

//引用				指针
//必须初始化		可以不初始化
//不能为空			可以为空
//不能更换目标		可以更换目标


void fun(int *a,int &b) {

	//指针在定义时不需要初始化所以使用要检查是否为空
	if (a != NULL)
		*a = 90;

	//引用定义时就已经初始化可以直接用
	b = 100;

}

void fun1() {
	int a = 3;
	int b = 4;
	
	int* p = &a;
	cout << *p << endl;
	p = &b;
	cout << *p << endl;
	//可以改变指向

	int& q = a;
	cout << q << endl;
	q = b;
	cout << q << endl;
	//引用依然指向的是a,但a的值却变成b
	cout << a << endl;
}
//int main() {
//	int* p;
//	//int& q; 必须初始化
//
//	int num1 = 3;
//	int num2 = 4;
//
//	int* a = &num1;
//	int& b = num2;
//	fun(a, b);
//	cout << *a << " " << b << endl;
//
//	fun1();
//}