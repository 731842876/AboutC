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
	//C++结构体中不仅可以定义数据，还可以定义函数

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

//符号St已经成为 struct Student 别名
//void St() {
//
//}

//int main() {
//
//	//有同名函数情况下定义需要加上struct
//	struct Animal a;
//	a.setAge(10);
//	cout << a.printAge() << endl;
//
//	//基类指针指向派生类对象，只能调用基类函数。
//	Animal* dog = new Dog();
//	
//
//}