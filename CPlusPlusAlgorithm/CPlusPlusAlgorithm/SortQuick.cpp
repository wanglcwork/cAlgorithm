#include "stdafx.h"
#include "SortQuick.h"


SortQuick::SortQuick()
{
}


SortQuick::~SortQuick()
{
}

void SortQuick::quickSort(int a[], int left, int right) {
	// left��right���ǺϷ���Χ�ڵ�С��

	if (left < right)
	{
		int i = left;
		int j = right;
		int x = a[i];

		// ����������,�ҵ���һ����xС��,�ŵ����.
		while (i < j && a[j] >= x)
		{
			j--;
		}
		if (i < j)
		{
			a[i++] = a[j];
		}

		// ����������,�ҵ���һ����x���,�ŵ��ұ�.
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