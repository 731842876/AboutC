#include <iostream>
#include <algorithm>
#include <deque>
#include <vector>
#include <map>
#include <unordered_map>
#include <assert.h>
using namespace std;


// @File      : test
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/7/26 11:23:04

//delete跟delete[]的区别
class Teacher
{
public:
	Teacher(){}
	~Teacher() {
		cout << "bye" << endl;
	}

private:
	string name;
};

typedef struct {
	int sex;
}Student;

void delete_test() {
	//对于内部数据类型 delete和delete[]功能相同
	int* p = new int;
	int* q = new int[10];
	delete[]p;
	delete[]q;

	//对于自定义数据，delete删除指针，delete[]删除数组
	Student* sp = new Student;
	Student* sq = new Student[10];
	delete sp;
	delete sq;



	//delete[]会调用数组元素的析构函数，对于内部数据(包括结构体)，由于没有析构函数所以跟delete效果一样，
	//而外部数据会被误以为指向对象而报错

	Teacher* tp = new Teacher;
	Teacher* tq = new Teacher[10];
	delete tp;
	delete[] tq;
}



//引用类型函数返回
double nums[5] = { 10.3,22.1,33.2,77.2,11.2 };
double& SetValue(int pos) {
	double& target = nums[pos];
	return target;
}
void test_yinyong() {

	for (int i = 0; i < 5; i++)
		cout << nums[i] << " ";
	cout << endl;

	
	SetValue(1) = 20.33333;


	for (int i = 0; i < 5; i++)
		cout << nums[i] << " ";
	cout << endl;
}


//继承和派生测试
class A
{
public:

	~A() {
		cout << "a bye" << endl;
	}

	void test() {
		cout << "this is a" << endl;
	}
};
class B:public A
{
public:

	~B() {
		cout << "b bye" << endl;
	}
	void test() {
		cout << "this is b" << endl;
	}
};


//memcpy函数实现
//void* MyMemcpy(void* dest, const void* src, int count) {
//
//	if (dest == NULL || src == NULL || count <= 0)
//		return NULL;
//
//	char* pdest = (char*)dest;
//	char* psrc = (char*)src;
//	
//	//源地址和目标地址重叠，低字节向高字节拷贝
//	//while ((*pdst++ = *psrc++) != '\0');
//
//	if (pdest > psrc && pdest < psrc + count) {
//		pdest = pdest + count - 1;
//		psrc = psrc + count - 1;
//		while (count--)
//		{
//			*pdest-- = *psrc--;
//		}
//	}
//	else
//	{
//		while (count--)
//		{
//			*pdest++ = *psrc++;
//		}
//	}
//	
//
//	return dest;
//}

//strlen函数实现
//int MyStrlen(const char* src) {
//	assert(src != NULL);
//	int len = 0;
//	while (*src++!='\0')
//	{
//		len++;
//	}
//	return len;
//}

//STL容器删除所有对应值2

void UseVctor() {

	vector<int>nums = { 3,2,1,2,5,7,10,2,33,76 };
	
	sort(nums.begin(), nums.end());
	//严格上讲unique将不重复的元素移到前面,达到去重效果，使用前最好排序
	/*vector<int>::iterator stop = unique(nums.begin(), nums.end());
	for (vector<int>::iterator it = nums.begin(); it != stop; it++) {
		cout << *it << " ";
	}*/

	for (vector<int>::iterator it = nums.begin(); it != nums.end(); ) {
		if (*it == 2)
			it = nums.erase(it);
		else {
			cout << *it << " ";
			it++;
		}
		
		//进行单个元素删除后，传入的迭代器指向不变，仍然指向被删除元素的位置，
		//而被删除元素之后的所有元素都向前移动一位，
		//也就是该迭代器实际上是指向了原来被删除元素的下一个元素。
	}
	

}

void UseList() {
	list<int> li = { 3,2,1,2,5,7,10,2,33,76 };

	for (list<int>::iterator it = li.begin(); it != li.end();) {

		if (*it==2)
		{
			it = li.erase(it);
		}
		else {
			cout << *it << " ";
			it++;
		}
	}
}

void UseDeque() {
	deque<int> de = { 3,2,1,2,5,7,10,2,33,76 };
	for (deque<int>::iterator it = de.begin(); it != de.end();) {

		if (*it == 2) {
			it = de.erase(it);
		}
		else {
			cout << *it << " ";
			it++;
		}
		
	}

}

void UseMap() {
	map<int, int >m = { {1, 98}, { 2,67 }, { 3,10 }, { 4,2 }, { 5,2 }, { 6,100 } };
	for (map<int, int>::iterator it = m.begin(); it != m.end(); )
	{
		if (it->second == 2) {
			it = m.erase(it);
		}
		else {
			cout << it->first << " " << it->second << endl;
			it++;
		}	
	}
}






void GetMemory(char** p, int size) {
	*p = (char*)malloc(size);
}

class ttt
{
public:
	ttt(int a) {
		cout << a << endl;
	}


};




//
//int main() {
//	
//	/*char str[20] = "iamastudent";
//	char* res;
//	GetMemory(&res, 100);
//	cout << (char*)MyMemcpy(res, str, 3) << endl;*/
//	//cout << MyStrlen(str) << endl;
//	
//
//	//UseVctor();
//	//UseList();
//	//UseDeque();
//	//UseMap();
//
//	//MySort();
//	
//	
//	
//
//}