#pragma once
#ifndef Common_MySort
#define Common_MySort
#include "Value.h"

//���������
void generateRandomArray(int n, int rangeL, int rangeR) {


	fstream ofs;
	ofs.open("data.txt", ios::out);

	assert(rangeL <= rangeR);
	//int* arr = new int[n]; // ����һ�� n��Ԫ�ص�����

	srand(time(NULL)); // �������
	for (int i = 0; i < n; i++)
		ofs << rand() % (rangeR - rangeL + 1) + rangeL << endl;

}
void LoadData(int data[],int size) {
	ifstream ifs;
	ifs.open("data.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "��ʧ�ܣ����´��� " << endl;
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



//��������
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

//ѡ������
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

//ֱ�Ӳ�������
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


//ϣ������
//������ֱ�Ӳ�������ļ�ǿ��
void ShellSort(int nums[], int len) {

}

//ð������
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


//�鲢����
//�ȷֺ���
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
	//������õķŵ�ԭ������
	while (left<=right)
	{
		nums[left++] = res[k++];
	}
}
void MergeSort(int nums[],int left,int right,int res[]) {
	if (left < right) {
		int mid = (left + right) >> 1;
		//a>>b��ʾa����2��b�η���a<<b��ʾa����2��b�η�

		MergeSort(nums, left, mid, res);
		MergeSort(nums, mid + 1, right, res);
		cure(nums, left, mid, right, res);
	}
}


#endif Common_MySort