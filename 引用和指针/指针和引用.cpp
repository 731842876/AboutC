#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : ָ�������
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/7/25 16:02:36

//����				ָ��
//�����ʼ��		���Բ���ʼ��
//����Ϊ��			����Ϊ��
//���ܸ���Ŀ��		���Ը���Ŀ��


void fun(int *a,int &b) {

	//ָ���ڶ���ʱ����Ҫ��ʼ������ʹ��Ҫ����Ƿ�Ϊ��
	if (a != NULL)
		*a = 90;

	//���ö���ʱ���Ѿ���ʼ������ֱ����
	b = 100;

}

void fun1() {
	int a = 3;
	int b = 4;
	
	int* p = &a;
	cout << *p << endl;
	p = &b;
	cout << *p << endl;
	//���Ըı�ָ��

	int& q = a;
	cout << q << endl;
	q = b;
	cout << q << endl;
	//������Ȼָ�����a,��a��ֵȴ���b
	cout << a << endl;
}
//int main() {
//	int* p;
//	//int& q; �����ʼ��
//
//	int num1 = 3;
//	int num2 = 4;
//
//	int* a = &num1;
//	int& b = num2;
//	fun(a, b);
//	cout << *a << " " << b << endl;
//
//	fun1();
//}