#include <iostream>
using namespace std;


// @File      : Point_1
// @Author    : ATLAS
// @brief     : ���麯��ʹһ�����Ϊ������
// @Time      : 2021/6/28 17:57:40


//���������ٰ���һ�����麯��
class test
{
public:
	virtual void show() = 0;
	void Print() {
		cout << "hey" << endl;
	}
};


//int main() {
//	test b;//�����಻�ܳ�ʼ��
//}