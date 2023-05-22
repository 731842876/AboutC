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
	//将元素入栈
	bool push(const Type& element) {
		if (top_Index >= capacity - 1)
			return false;

		++top_Index;
		urls[top_Index] = element;
		return true;
	}

	//pop只用于弹出栈顶元素，不能返回栈顶元素，因为遇上cout右结合会破坏栈的先进后出。
	bool pop() {
		if (top_Index < 0)
			return false;
		--top_Index;
		return true;
	}
	//获取栈顶元素 可选择配合pop将已获取的弹出
	Type GetTop() {
		if (top_Index < 0)
			exit(0);
		return urls[top_Index];
	}

	bool IsEmpty() {
		return top_Index == -1;
	}

	//获取栈大小
	int size() {
		return capacity;
	}
	//获取栈顶元素下标
	int GetTop_Index() {
		return top_Index;
	}
};


#endif // !Common_MyStack
