#include <iostream>
using namespace std;


// @File      : Point_1
// @Author    : ATLAS
// @brief     : 纯虚函数使一个类成为抽象类
// @Time      : 2021/6/28 17:57:40


//抽象类至少包含一个纯虚函数
class test
{
public:
	virtual void show() = 0;
	void Print() {
		cout << "hey" << endl;
	}
};


//int main() {
//	test b;//抽象类不能初始化
//}