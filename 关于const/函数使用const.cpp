#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : 函数使用const
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/7/23 0:53:57


//const 数据成员只在某个对象生存期内是常量，类的对象未被创建时，编译器不知道 SIZE 的值是什么，
//所以const常量使用构造函数初始化，而不是直接赋值
class Animal
{

private:
	string Name;
	const int ID;

	//static静态成员变量不能在类的内部初始化，在类的内部只是声明
	static int sex;
public:
	Animal(string name,int id):ID(id),Name(name){}

	
	void showID()const {
		cout << ID << endl;
	}
	void showID_noConst() {
		cout << ID << endl;
	}
	void showID_noConst()const {
		cout << "const " << ID << endl;
	}
};
int Animal::sex = 1;



//指针指向内容不可变
const int* f1();

//指针本身不可变
int* const f2();

//保护src内容不变
void copy(char* dst, const char* src);


//此时A作为自定义类属于外部数据，如果不加&号将产生一份拷贝增加时间开销，但引用传递可能造成原本数据的变动所以加上const
void f3(const Animal& a);

//int main() {
//
//	//非const对象能够访问任意的成员函数，包括const成员函数
//	Animal a("alx", 990);
//	a.showID();
//	a.showID_noConst();
//
//	//const对象只能访问const成员函数，假如有重载函数，const对象默认调用const重载
//	const Animal b("mai", 990);
//	b.showID();
//	b.showID_noConst();
//
//}

