#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : const_
// @Author    : ATLAS
// @brief     : const与#define不同点在于，const具有类型，可以进行安全检查，define只是简单字符串替换，没有检查。
//				对于空间使用来讲，const给出对应内存地址运行过程只有一份拷贝，而define作为立即数有多份拷贝
// @Time      : 2021/6/28 17:57:40



extern int test;
extern const int test2;



//常量被定义后不可修改
const int i = 0;

//常量定义必须初始化
//const int j;

const string s = "hey";

//int main() {
//	
//	cout << test << endl;
//	cout << test2 << endl;
//
//
//	int num = 4;
//
//	//const int* a不需要初始化
//	const int* a;
//	//等同于
//	int const* b;
//	//const位于*左侧，代表const修饰指针指向的变量,即为常量
//
//	//const位于*右侧，代表const修饰指针本身，即为常指针,如同常量定义需要初始化，并且不能修改指针的值
//	int* const c = &num;
//	//可通过非const的间接指针修改值
//	int* d = &num;
//
//	//c=&num为指针指向num在内存的地址，如打印值则要使用*c
//	cout << c << endl;
//	cout << *c << endl;
//	*d = 3;
//	cout << *c << endl;
//
//
//	
//
//}