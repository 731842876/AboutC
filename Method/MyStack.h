#pragma once
#pragma

#ifndef Common_MyStack
#define Common_MyStack

#include<iostream>

template<class Type>
class MyStack
{
private:
	Type* urls;
	int capacity, top_Index;

public:
	MyStack(int Size_input): capacity(Size_input), top_Index(-1){
		urls = new Type[Size_input];
	}

	~MyStack() {
		delete[]urls;
	}
	//��Ԫ����ջ
	bool push(const Type& element) {
		if (top_Index >= capacity - 1)
			return false;

		++top_Index;
		urls[top_Index] = element;
		return true;
	}

	//popֻ���ڵ���ջ��Ԫ�أ����ܷ���ջ��Ԫ�أ���Ϊ����cout�ҽ�ϻ��ƻ�ջ���Ƚ������
	bool pop() {
		if (top_Index < 0)
			return false;
		--top_Index;
		return true;
	}
	//��ȡջ��Ԫ�� ��ѡ�����pop���ѻ�ȡ�ĵ���
	Type GetTop() {
		if (top_Index < 0)
			exit(0);
		return urls[top_Index];
	}

	bool IsEmpty() {
		return top_Index == -1;
	}

	//��ȡջ��С
	int size() {
		return capacity;
	}
	//��ȡջ��Ԫ���±�
	int GetTop_Index() {
		return top_Index;
	}
};


#endif // !Common_MyStack
