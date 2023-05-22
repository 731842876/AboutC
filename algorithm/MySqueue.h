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
	//forntͷָ�룬rearβָ��
public:
	MyQueue(int Size_input) :capacity(Size_input), front(0), rear(0) {
		data = new Type[Size_input];
	}

	~MyQueue() {
		delete[]data;
		front = rear = 0;
	}

	//�ж϶����Ƿ�Ϊ��
	bool IsEmpty() {
		return front == rear ? true : false;
	}

	//�������
	bool push(Type x) {
		if ((rear + 1) % capacity == front) {
			cout << "Squeue is full" << endl;
			return false;
		}

		data[rear] = x;
		rear = (rear + 1) % capacity;

		return true;
	}


	//��������
	bool pop() {
		if (IsEmpty()) {
			cout << "���г���ʹ�÷�Χ" << endl;
			exit(1);
		}
			
		front = (front + 1) % capacity;
		return true;
	}

	Type GetTop() {
		if (IsEmpty()) {
			cout << "���г���ʹ�÷�Χ" << endl;
			exit(1);
		}
			
		return data[front];
		
	}

	//���ض��д�С
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
