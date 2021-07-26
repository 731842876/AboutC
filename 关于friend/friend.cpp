#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;


// @File      : friend
// @Author    : ATLAS
// @brief     : ��Ԫ�ṩ��һ�� ��ͨ�����������Ա���� ������һ�����е�˽�л򱣻���Ա�Ļ��ơ�
// @Time      : 2021/7/26 10:42:31

//�ŵ㣺����˳��������Ч�ʡ�
//ȱ�㣺�ƻ�����ķ�װ�Ժ����ݵ�͸���ԡ�

class A {
private:
	int count;
public:
	A(int c) :count(c) {}

	//�����������κ���������������������������ⲿ��
	friend int GetCount(A& target);
};

int GetCount(A& target) {
	return target.count;
}

//��Ԫ�� ��B����A����Ԫ����ô��B����ֱ�ӷ���A��˽�г�Ա��

class father
{
public:
	father(int m):money(m){}
	friend class son;

private:
	int money;
};


class son
{
public:
	int GetMoney(father& f) {
		return f.money;
	}

};


int main() {
	A t(3);
	cout << GetCount(t) << endl;

	father f(1000);
	son s;
	cout << s.GetMoney(f) << endl;
	//��Ԫ��ϵû�м̳��� ������B����A����Ԫ����C�̳�����A����ô��Ԫ��B��û�취ֱ�ӷ�����C��˽�л򱣻���Ա��
	//��Ԫ��ϵû�д����� ������B����A����Ԫ����C����B����Ԫ����ô��Ԫ��C��û�취ֱ�ӷ�����A��˽�л򱣻���Ա
}