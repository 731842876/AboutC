#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : static
// @Author    : ATLAS
// @brief     : ��̬��������̬���Ա
// @Time      : 2021/7/23 2:13:06


void testStatic() {
	//��������Ϊstaticʱ���ڴ�ռ佫�ڳ��������������ֻ����һ��
	static int n = 0;
	//�ñ�������������ÿ�ε��ö���ʼ�����������ڴ洢ĳ������״̬��
	cout << n << endl;
	n++;
}


class A
{
public:

	void setCoutn(int c) {
		count = c;
	}
	void showCount() {
		cout << count << endl;
	}

	//��̬��Ա����ֻ�ܷ��ʾ�̩���ݳ�Ա��������̬��Ա����
	static void say() {
		cout << "hey" << endl;
	}

private:
	
	static int count;
	//���ھ�̬����ֻ��ʼ��һ�Σ������������þ�̬����
	//��ͬ�Ķ������ж����̬�����������ڹ��캯���ﲻ�ܳ�ʼ����̬����

	
};
//���о�̬������Ҫ��������г�ʼ��
int A::count = 10;


class B
{
public:
	B() {
		cout << "Creat" << endl;
	}
	~B() {
		cout << "Destroy" << endl;
	}

private:

};


//int main() {
//
//	for (int i = 0; i < 3; i++)
//		testStatic();
//
//
//	A a;
//	A b;
//
//	//��������ʹ��.�����þ�̬��Ա��������һ���������������ã�����
//	A::say();
//
//
//	//���������ͬһ����̬����
//	a.setCoutn(20);
//	b.showCount();
//
//	if (1){
//		//b����ֻ������if������
//		B b;
//
//		//c����ᴩ����������������
//		static B c;
//	}
//
//	cout << "main end" << endl;
//
//	
//}