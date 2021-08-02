#pragma once



#ifndef Common_MyQueue
#define Common_MyQueue

#include"Value.h"

template<class Type>
class MyQueue
{
private:
	Type* data;
	int capacity;
	int front, rear;
	//fornt头指针，rear尾指针
public:
	MyQueue(int Size_input) :capacity(Size_input), front(0), rear(0) {
		data = new Type[Size_input];
	}

	~MyQueue() {
		delete[]data;
		front = rear = 0;
	}

	//判断队列是否为空
	bool IsEmpty() {
		return front == rear ? true : false;
	}

	//进入队列
	bool push(Type x) {
		if ((rear + 1) % capacity == front) {
			cout << "Squeue is full" << endl;
			return false;
		}

		data[rear] = x;
		rear = (rear + 1) % capacity;

		return true;
	}


	//弹出队列
	bool pop() {
		if (IsEmpty()) {
			cout << "队列超出使用范围" << endl;
			exit(1);
		}
			
		front = (front + 1) % capacity;
		return true;
	}

	Type GetTop() {
		if (IsEmpty()) {
			cout << "队列超出使用范围" << endl;
			exit(1);
		}
			
		return data[front];
		
	}

	//返回队列大小
	int size() {
		return capacity;
	}

};

typedef struct QNode {
	ElemType data;
	struct QNode* next; 
}QNode;
typedef struct Queue {
	QNode* front;
	QNode* rear;
}Que, * pQue;


#endif // !Common_MyQueue
