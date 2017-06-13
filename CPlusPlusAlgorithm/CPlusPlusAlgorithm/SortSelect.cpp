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
				minIndex = j;
			}
		}

		if (minIndex != i)
		{
			SortUtil::swap(a[i], a[minIndex]);
		}
	}
}

void SortSelect::SortSelect2(int a[], int n) {

}

void SortSelect::SortSelect3(int a[], int n) {

}