#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : ByteAlignment
// @Author    : ATLAS
// @brief     : intΪ4��floatΪ4��doubleΪ8��charΪ1��longΪ4��shortΪ2
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
//	//�����ֽڶ���ԭ���ڲ����ĳ�Ա��Ϊ���������������������int��Ϊ��������ʱ��4+4+1=9�����Ϊ12��Ϊsizeof�����
//
//	cout << sizeof(C) << endl;
//	cout << sizeof(D) << endl;
//	//C��D���ڴ���ʵ�ʲ��֣�*��λ���
//	//		C	a		b	c
//	//			1111	1*	11
//	// 
//	// ��C�У������ĳ�Աint��Ϊ��������b������1*��c�պó�Ϊ1*11 Ϊ4�ı�����
//	// 
//	//		D	a		b		c
//	//			1***	1111	11**
//	//��D�У�ͬ�������ĳ�Աint��Ϊ���������������ڴ�λ�ò�������ÿ�����ݳ�Ա�洢����ʼλ��Ҫ�Ӹó�Ա��С����������ʼ������a��c������䣬�����Ϊ4+4+4=12
//
//
//	cout << sizeof(E) << endl;
//	cout << sizeof(F) << endl;
//	//F���ڴ��еĲ���,char a[2]��ͬ�� ����2��char
//	//		a		b		c			d			e��int,double,float��
//	//		1*1*	1111	11111111	11******	1111***,11111111,1111****
//	//
//
//}