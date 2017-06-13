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

	for (gap = n / 2; gap > 0; gap = gap / 2) // ������,ÿ������Ϊgap,gapΪ����,��ÿ�εķ���ĳ���.
	{
		for (i = 0; i < gap; i++) // ����ÿ�������gap,ÿ����Ҫ����gap��.
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
		for (i = gap; i < n; i++) // ��gap����,�Ƚ�ÿ�������Ԫ��,����Ϊgap
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
			for (j = i - gap; j >= 0 && a[j] > a[j + gap]; j = j - gap) // j = j-gap,��֮ǰ����������Ƚ�.
			{
				SortUtil::swap(a[j], a[j + gap]);
			}
		}
	}
}
