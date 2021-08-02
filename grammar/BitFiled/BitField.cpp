#include <iostream>
using namespace std;
//1位 = 1比特；1字 = 2字节；1字节 = 8位；1字 = 16位。

// @File      : BitField
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/6/28 17:57:40


//struct bit_field_name
//{
//	type member_name : width;
//};
//bit_field_name	  位域结构名
//type	          位域成员的类型，必须为 int、signed int 或者 unsigned int 类型
//member_name	      位域成员名
//width	          规定成员所占的位数

//位域在内存中的布局是与机器有关的
//位域的类型必须是整型或枚举类型，带符号类型中的位域的行为将因具体实现而定
//取地址运算符（& ）不能作用于位域，任何指针都无法指向类的位域


struct RGB {
	//8 Bits 的位域成员，其容量为 2 ^ 8 = 256，即赋值范围应为[0, 255]
	unsigned int r : 8;
	unsigned int g : 8;
	unsigned int b : 8;
};


struct RGB_TWO {
	
	unsigned int r : 8;
	unsigned int : 2;//未知域起填充作用,整个结构体为26bit
	unsigned int g : 8;
	//unsigned int : 2;
	unsigned int b : 8;

};

//int main() {
//	
//	RGB a = { 2,3,5 };
//	cout << a.r << endl;//输出为258-256=2，旧值被覆盖。
//	cout << a.b << endl;
//	cout << endl;
//
//	RGB_TWO test = {2,300};
//	
//	cout << test.r << endl;
//	cout << test.g << endl;//由于g的位域空间没有储值，所以r的溢出位移到g
//	cout << test.b << endl;
//}