#include <iostream>
using namespace std;


// @File      : C__Struct
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/6/28 17:57:40

struct Animal {

private:
	int age;
public:
	//C++�ṹ���в������Զ������ݣ������Զ��庯��

	void setAge(int in) {
		age = in;
	}
	int printAge() {
		return age;
	}
};


struct Dog :Animal {

private:
	string name;
public:
	void setName(string in) {
		name = in;
	}

	string printName() {
		return name;
	}
};

void test() {
	cout << "hey" << endl;
}



typedef struct Student {
	int num;
}St;

//����St�Ѿ���Ϊ struct Student ����
//void St() {
//
//}

//int main() {
//
//	//��ͬ����������¶�����Ҫ����struct
//	struct Animal a;
//	a.setAge(10);
//	cout << a.printAge() << endl;
//
//	//����ָ��ָ�����������ֻ�ܵ��û��ຯ����
//	Animal* dog = new Dog();
//	
//
//}