#include "stdafx.h"
#include "SortInsert.h"
#include "SortUtil.h"


SortInsert::SortInsert()
{
}


SortInsert::~SortInsert()
{
}

void SortInsert::insertSort1(int a[], int n) {
	int i = 0;
	int j = 0;
	int k = 0;

	// 把第一个元素作为初始有序组.
	for (i = 1; i < n; i++)
	{
		// 把当前第i个元素,与i之前的元素比较,如果找到比a[i]小的元素,就把a[i]放在那个元素的后面,形成新的有序数组.(前面有序数组,从第1个元素开始,插入当前元素)
		for (j = i - 1; j >= 0; j--)
		{
			if (a[j] < a[i])
			{
				break;
			}
		}
		
		if (j != i-1)
		{
			int temp = a[i];
			for (k = i - 1; k > j; k--) // 第j个元素不用移动,把a[i],放到第j个元素的后面.
			{
				a[k + 1] = a[k];
			}
			a[k + 1] = temp; // 循环结束后,k+1在j后面. =>k=j =>temp,即移动前的a[i]应该放在j后面.
		}

	}

}

void SortInsert::insertSort2(int a[], int n) {
	int i = 0;
	int j = 0;

	for (i = 1; i < n; i++)
	{
		int temp = a[i]; // 移动数组,只需要备份最后一个元素.
		for (j = i - 1; j >=0 && a[j] > temp; j--) // 找到第一个比temp小的元素,插入temp.
		{
			a[j + 1] = a[j];
		}
		a[j + 1] = temp;

	}

}

void SortInsert::insertSort3(int a[], int n) {
	int i = 0;
	int j = 0;

	for (i = 1; i < n; i++)
	{
		for (j = i - 1; j >= 0 && a[j] > a[j + 1]; j--) // 前面的元素比后面的元素大,就交换过来.
		{
			SortUtil::swap(a[j], a[j + 1]);
		}
	}
}