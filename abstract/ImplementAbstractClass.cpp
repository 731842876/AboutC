#include <iostream>
using namespace std;


// @File      : ImplementAbstractClass
// @Author    : ATLAS
// @brief     : �������ʵ��
// @Time      : 2021/6/28 17:57:40


class A {

public:
	virtual void show() = 0;
	
	//���졢�����������ܵ��ô��麯��
	A() {}

	//�������У���Ա�������Ե��ô��麯��
	void useShow() {
		this->show();
	}
};

//�ӳ�������������������ʵ�����д��麯�������ܳ�Ϊ�ǳ�������г�ʼ��
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