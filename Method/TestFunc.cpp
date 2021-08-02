#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
#include "MyStack.h"
#include "MySqueue.h"
#include "MySort.h"
using namespace std;


// @File      : TestFunc
// @Author    : ATLAS
// @brief     : 
// @Time      : 2021/7/30 11:30:44

int main() {

	int data[200];
	LoadData(data, 200);

	int len = sizeof(data) / 4;
	//QuickSort(data, 0, len - 1);
	//SelectSort(data, len);
	//InsertSort(data, len);
	//BubbleSort(data, len);
	int res[200];
	MergeSort(data, 0, len - 1, res);

	
	
	for (int i = 0; i < len; i++)
	{
		cout << data[i] << " ";
	}
}