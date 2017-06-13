#include "stdafx.h"
#include "SortMerge.h"


SortMerge::SortMerge()
{
}


SortMerge::~SortMerge()
{
}

void SortMerge::mergeSort(int a[], int n) {
	int* temp = new int[n];
	if (temp == NULL)
	{
		return;
	}
	mergeSort1(a, 0, n-1, temp); // first,last 要排序的第一个和最后一个元素的下标.
}

void SortMerge::mergeSort1(int a[], int fist, int last, int temp[]) {

	if (fist >= last) {
		return;
	}

	int mid = (fist + last) / 2;
	mergeSort1(a, fist, mid, temp); // 左边排序
	mergeSort1(a, mid + 1, last, temp); // 右边排序
	mergeArray(a, fist, mid, last, temp); // 合并两边的数组
	
}

void SortMerge::mergeArray(int a[], int first, int mid, int last, int temp[]) {
	int i = first;
	int j = mid + 1; // 右边数组的第一个元素.
	int k = 0;

	while (i <= mid && j <= last)
	{
		if (a[i] < a[j])
		{
			temp[k++] = a[i++]; // i++只能这么写了.问题不大.
		}
		else
		{
			temp[k++] = a[j++];
		}
	}

	while (i<=mid)
	{
		temp[k++] = a[i++];
	}

	while (j<=last)
	{
		temp[k++] = a[j++];
	}

	for (int i = 0; i < k; i++)
	{
		a[first+i] = temp[i]; // 从first元素开始排序,包含first
	}
}

