#include "stdafx.h"
#include "SortQuick.h"


SortQuick::SortQuick()
{
}


SortQuick::~SortQuick()
{
}

void SortQuick::quickSort(int a[], int left, int right) {
	// left和right都是合法范围内的小标

	if (left < right)
	{
		int i = left;
		int j = right;
		int x = a[i];

		// 从右向左找,找到第一个比x小的,放到左边.
		while (i < j && a[j] >= x)
		{
			j--;
		}
		if (i < j)
		{
			a[i++] = a[j];
		}

		// 从左向右找,找到第一个比x大的,放到右边.
		while (i<j && a[i] < x)
		{
			i++;
		}
		if (i < j)
		{
			a[j--] = a[i];
		}

		a[i] = x;

		quickSort(a, left, i - 1);
		quickSort(a, i + 1, right);
	}
	
}