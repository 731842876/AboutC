#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : const_
// @Author    : ATLAS
// @brief     : const��#define��ͬ�����ڣ�const�������ͣ����Խ��а�ȫ��飬defineֻ�Ǽ��ַ����滻��û�м�顣
//				���ڿռ�ʹ��������const������Ӧ�ڴ��ַ���й���ֻ��һ�ݿ�������define��Ϊ�������ж�ݿ���
// @Time      : 2021/6/28 17:57:40



extern int test;
extern const int test2;



//����������󲻿��޸�
const int i = 0;

//������������ʼ��
//const int j;

const string s = "hey";

//int main() {
//	
//	cout << test << endl;
//	cout << test2 << endl;
//
//
//	int num = 4;
//
//	//const int* a����Ҫ��ʼ��
//	const int* a;
//	//��ͬ��
//	int const* b;
//	//constλ��*��࣬����const����ָ��ָ��ı���,��Ϊ����
//
//	//constλ��*�Ҳ࣬����const����ָ�뱾����Ϊ��ָ��,��ͬ����������Ҫ��ʼ�������Ҳ����޸�ָ���ֵ
//	int* const c = &num;
//	//��ͨ����const�ļ��ָ���޸�ֵ
//	int* d = &num;
//
//	//c=&numΪָ��ָ��num���ڴ�ĵ�ַ�����ӡֵ��Ҫʹ��*c
//	cout << c << endl;
//	cout << *c << endl;
//	*d = 3;
//	cout << *c << endl;
//
//
//	
//
//}