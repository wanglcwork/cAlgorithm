#pragma once
class SortMerge
{
public:
	SortMerge();
	~SortMerge();

	static void mergeSort(int a[], int n);
private:
	static void mergeSort1(int a[], int fist, int last, int temp[]);
	static void mergeArray(int a[], int first, int mid, int last, int temp[]);
};

