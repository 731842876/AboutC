#include <iostream>
using namespace std;


// @File      : abstract
// @Author    : ATLAS
// @brief     : ���麯��Ϊû�о���ʵ�֣��麯����һ���о���ʵ�֡�
// @Time      : 2021/6/28 17:57:40


//�����˴��麯������Ϊ�����࣬��Ϊ���麯��û����ʵ�֣���Ҳ�޷���ʼ������
class test {

public:
	//ͨ����ֵΪ0���������麯��
	virtual void show() = 0;
};
//int main() {
//	
//	//test a;//�������޷���ʼ������
//	test* a1;//�ɳ�ʼ��ָ��
//}