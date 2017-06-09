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
	
	for (i = 1; i < n; i++)
	{
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
			for (k = i - 1; k > j; k--)
			{
				a[k + 1] = a[k];
			}
			a[k + 1] = temp; // 循环结束后,k+1在j后面. =>k=j =>temp,即移动前的a[i]应该放在j后面.
		}

	}

}

void SortInsert::insertSort2(int a[], int n) {
	int j = 0;

	for (size_t i = 1; i < n; i++)
	{
		int temp = a[i];
		for (j = i - 1; j >=0 && a[j] > temp; j--)
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
		for (j = i - 1; j >= 0 && a[j] > a[j + 1]; j--)
		{
			SortUtil::swap(a[j], a[j + 1]);
		}
	}
}