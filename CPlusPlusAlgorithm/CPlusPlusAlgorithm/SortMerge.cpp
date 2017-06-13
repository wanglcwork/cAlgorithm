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
	mergeSort1(a, 0, n-1, temp);
}

void SortMerge::mergeSort1(int a[], int fist, int last, int temp[]) {

	if (fist < last)
	{
		int mid = (fist + last) / 2;
		mergeSort1(a, fist, mid, temp);
		mergeSort1(a, mid + 1, last, temp);
		mergeArray(a, fist, mid, last, temp);
	}
}

void SortMerge::mergeArray(int a[], int first, int mid, int last, int temp[]) {
	int i = first;
	int j = mid + 1;
	int k = 0;

	while (i <= mid && j <= last)
	{
		if (a[i] < a[j])
		{
			temp[k++] = a[i++];
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

	while (j<last)
	{
		temp[k++] = a[i++];
	}

	for (int i = 0; i < k; i++)
	{
		a[first+i] = temp[i];
	}
}

