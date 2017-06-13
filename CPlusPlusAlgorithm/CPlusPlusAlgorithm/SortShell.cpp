#include "stdafx.h"
#include "SortShell.h"
#include "SortUtil.h"


SortShell::SortShell()
{
}


SortShell::~SortShell()
{
}

void SortShell::shellSort1(int a[], int n) {
	int i = 0;
	int j = 0;
	int gap = 0;

	for (gap = n / 2; gap > 0; gap = gap / 2) // 分两组,每组数量为gap,gap为步长,即每次的分组的长度.
	{
		for (i = 0; i < gap; i++) // 遍历每组的数量gap,每组需要遍历gap次.
		{
			for (j = i + gap; j < n; j = j + gap) // j = i+gap; 
			{
				if (a[j] < a[j-gap])
				{
					int temp = a[j];
					int k = j - gap;
					while (k >= 0 && a[k] > temp)
					{
						a[k + gap] = a[k];
						k = k - gap;
					}
					a[k + gap] = temp;
				}
			}
		}
	}

}

void SortShell::shellSort2(int a[], int n) {
	int i = 0;
	int j = 0;
	int gap = 0;
	int temp = 0;
	int k = 0;

	for (gap = n / 2; gap > 0; gap = gap / 2)
	{
		for (i = gap; i < n; i++) // 从gap往后,比较每个组里的元素,步长为gap
		{
			if (a[i] < a[i-gap] )
			{
				temp = a[i];
				k = i - gap;
				while (k >=0 && a[k] > temp)
				{
					a[k + gap] = a[k];
					k = k - gap;
				}
				a[k + gap] = temp;
			}
		}
		
	}

}

void SortShell::shellSort3(int a[], int n) {
	int i = 0;
	int j = 0;
	int gap = 0;

	for (gap = n / 2; gap > 0; gap = gap / 2)
	{
		for (i = gap; i < n; i++)
		{
			for (j = i - gap; j >= 0 && a[j] > a[j + gap]; j = j - gap) // j = j-gap,与之前的有序数组比较.
			{
				SortUtil::swap(a[j], a[j + gap]);
			}
		}
	}
}
