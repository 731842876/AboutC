#pragma once
#ifndef Common_MySort
#define Common_MySort
#include "Value.h"

//生成随机数
void generateRandomArray(int n, int rangeL, int rangeR) {


	fstream ofs;
	ofs.open("data.txt", ios::out);

	assert(rangeL <= rangeR);
	//int* arr = new int[n]; // 创建一个 n个元素的数组

	srand(time(NULL)); // 随机种子
	for (int i = 0; i < n; i++)
		ofs << rand() % (rangeR - rangeL + 1) + rangeL << endl;

}
void LoadData(int data[],int size) {
	ifstream ifs;
	ifs.open("data.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "打开失败，重新创建 " << endl;
		generateRandomArray(size, 0, 300);
		exit(0);
	}
	else
	{
		string buf;
		int i = 0;
		while (getline(ifs, buf))
		{
			data[i++] = stoi(buf);
			//cout << stoi(buf) << " ";	
		}

	}
}



//快速排序
int division(int nums[], int left, int right) {

	int base = nums[left];
	while (left<right)
	{
		while (left < right && nums[right] >= base)
			right--;
		nums[left] = nums[right];

		while (left < right && nums[left] <= base)
			left++;
		nums[right] = nums[left];
	}
	nums[left] = base;
	return left;
}
void QuickSort(int nums[], int left, int right) {

	if (left < right) {

		int base = division(nums, left, right);
		QuickSort(nums, left, base - 1);
		QuickSort(nums, base + 1, right);
	}
}

//选择排序
void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void SelectSort(int nums[],int len) {
	for (int i = 0; i < len-1; i++)
	{
		int tmp = i;
		for (int j = i+1; j < len; j++)
		{
			if (nums[j] < nums[tmp])
				tmp = j;
		}
		if (tmp!=i) {
			swap(&nums[i], &nums[tmp]);
		}

	}
}

//直接插入排序
void InsertSort(int nums[], int len) {

	for (int i = 0; i < len; i++)
	{
		int j;
		int tmp = nums[i];
		for (j = i-1;j>=0&&nums[j]>tmp; j--)
		{
			nums[j + 1] = nums[j];
		}
		nums[j+1] = tmp;
	}

}


//希尔排序
//本质是直接插入排序的加强版
void ShellSort(int nums[], int len) {

}

//冒泡排序
void BubbleSort(int nums[], int len) {
	
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-1; j++)
		{
			if (nums[j]>nums[j+1])
			{
				int tmp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = tmp;
			}
		}
	}
}


//归并排序
//先分后治
void cure(int nums[],int left,int mid,int right,int res[]) {
	int i = left;
	int j = mid + 1;
	int k = 0;

	while (i<=mid&&j<=right)
	{
		if (nums[i] >= nums[j]) {
			res[k++] = nums[j++];
		}
		else
		{
			res[k++] = nums[i++];
		}
	}

	while (i<=mid)
	{
		res[k++] = nums[i++];
	}
	while (j <= right)
	{
		res[k++] = nums[j++];
	}
	k = 0;
	//将排序好的放到原先数组
	while (left<=right)
	{
		nums[left++] = res[k++];
	}
}
void MergeSort(int nums[],int left,int right,int res[]) {
	if (left < right) {
		int mid = (left + right) >> 1;
		//a>>b表示a除以2的b次方，a<<b表示a乘以2的b次方

		MergeSort(nums, left, mid, res);
		MergeSort(nums, mid + 1, right, res);
		cure(nums, left, mid, right, res);
	}
}


#endif Common_MySort