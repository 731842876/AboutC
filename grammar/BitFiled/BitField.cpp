#include <iostream>
using namespace std;
//1λ = 1���أ�1�� = 2�ֽڣ�1�ֽ� = 8λ��1�� = 16λ��

// @File      : BitField
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/6/28 17:57:40


//struct bit_field_name
//{
//	type member_name : width;
//};
//bit_field_name	  λ��ṹ��
//type	          λ���Ա�����ͣ�����Ϊ int��signed int ���� unsigned int ����
//member_name	      λ���Ա��
//width	          �涨��Ա��ռ��λ��

//λ�����ڴ��еĲ�����������йص�
//λ������ͱ��������ͻ�ö�����ͣ������������е�λ�����Ϊ�������ʵ�ֶ���
//ȡ��ַ�������& ������������λ���κ�ָ�붼�޷�ָ�����λ��


struct RGB {
	//8 Bits ��λ���Ա��������Ϊ 2 ^ 8 = 256������ֵ��ΧӦΪ[0, 255]
	unsigned int r : 8;
	unsigned int g : 8;
	unsigned int b : 8;
};


struct RGB_TWO {
	
	unsigned int r : 8;
	unsigned int : 2;//δ֪�����������,�����ṹ��Ϊ26bit
	unsigned int g : 8;
	//unsigned int : 2;
	unsigned int b : 8;

};

//int main() {
//	
//	RGB a = { 2,3,5 };
//	cout << a.r << endl;//���Ϊ258-256=2����ֵ�����ǡ�
//	cout << a.b << endl;
//	cout << endl;
//
//	RGB_TWO test = {2,300};
//	
//	cout << test.r << endl;
//	cout << test.g << endl;//����g��λ��ռ�û�д�ֵ������r�����λ�Ƶ�g
//	cout << test.b << endl;
//}