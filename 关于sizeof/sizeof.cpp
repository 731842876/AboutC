#include <iostream>
using namespace std;


// @File      : sizeof_
// @Author    : ATLAS
// @brief     : ����sizeof��Ӧ��
// @Time      : 2021/6/28 17:57:40


//�����СΪ1�ֽ�
class testA{};



//��̬���ݳ�Ա�����������ڳ����һ��global data members�У�������Ϊ���һ�����ݳ�Ա������Ӱ����Ĵ�С��
//�������������˶��ٸ�ʵ�������������˶����µ��࣬��̬���ݳ�Աֻ��һ��ʵ����
//��̬���ݳ�Ա��һ�������������Ѿ����ڡ�
class testB{
public:
	char b; //8
	virtual void fun() {};//8
	static int c;
	static int d;
	static int f;
};

//һ����ָ���С64λ8��32λ4
//���۶��ٸ��麯������ֻ��һ��ָ���С
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

//�麯��Ҳ��̳У���СΪ
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