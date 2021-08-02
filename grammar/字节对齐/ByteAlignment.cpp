#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : ByteAlignment
// @Author    : ATLAS
// @brief     : int为4，float为4，double为8，char为1，long为4，short为2
// @Time      : 2021/6/28 17:57:40



class A
{
public:
	int a;
	int b;

};

class B
{
public:
	int a;
	int b;
	char c;

};

class C
{
public:
	int a;
	char b;
	short c;

};

class D
{
public:
	char a;
	int b;
	short c;

};

class E
{
public:
	int a;
	double b;
	float c;

};

class F
{
public:
	char a[2];
	int b;
	double c;
	short d;
	E e;

};


//int main() {
//	cout << sizeof(A) << endl;
//
//	cout << sizeof(B) << endl;
//	//根据字节对齐原则，内部最大的成员作为对其参数的整数倍，所以int作为整数倍的时候，4+4+1=9对齐后为12作为sizeof结果。
//
//	cout << sizeof(C) << endl;
//	cout << sizeof(D) << endl;
//	//C和D在内存中实际布局，*号位填充
//	//		C	a		b	c
//	//			1111	1*	11
//	// 
//	// 在C中，以最大的成员int作为整数倍，b在填充后1*与c刚好成为1*11 为4的倍数。
//	// 
//	//		D	a		b		c
//	//			1***	1111	11**
//	//在D中，同样以最大的成员int作为整数倍，由于在内存位置不连续，每个数据成员存储的起始位置要从该成员大小的整数倍开始，所以a和c各自填充，最后结果为4+4+4=12
//
//
//	cout << sizeof(E) << endl;
//	cout << sizeof(F) << endl;
//	//F在内存中的布局,char a[2]等同于 定义2个char
//	//		a		b		c			d			e（int,double,float）
//	//		1*1*	1111	11111111	11******	1111***,11111111,1111****
//	//
//
//}