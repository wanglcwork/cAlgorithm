#include "stdafx.h"
#include "SortSelect.h"
#include "SortUtil.h"


SortSelect::SortSelect()
{
}


SortSelect::~SortSelect()
{
}

void SortSelect::SortSelect1(int a[], int n) {
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{

		int minIndex = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[minIndex])
			{
				minIndex = j; // 选一个最小的,放到有序数组中,从小到大排序.
			}
		}

		if (minIndex != i) // minIndex如果就是i,就不用执行替换了.替换一下.=>这个判断貌似也没多少价值.
		{
			SortUtil::swap(a[i], a[minIndex]);
		}
	}
}




void SortSelect::SortSelect2(int a[], int n) {

}

void SortSelect::SortSelect3(int a[], int n) {

}