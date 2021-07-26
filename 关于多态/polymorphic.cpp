#include <iostream>
using namespace std;


// @File      : polymorphic
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/6/28 17:57:40

class A {

public:
	virtual void show(){
		cout << "A show" << endl;
	}
};

//Ä¬ÈÏ¼Ì³ÐÎªË½ÓÐ
class B : public A {

public:
	void show() {
		cout << "B show" << endl;
	}
};
//int main() {
//	
//	A a;
//	B b;
//
//	A* p = &a;
//	p->show();
//
//	p = &b;
//	p->show();
//
//}