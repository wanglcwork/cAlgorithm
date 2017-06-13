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

	// �ѵ�һ��Ԫ����Ϊ��ʼ������.
	for (i = 1; i < n; i++)
	{
		// �ѵ�ǰ��i��Ԫ��,��i֮ǰ��Ԫ�رȽ�,����ҵ���a[i]С��Ԫ��,�Ͱ�a[i]�����Ǹ�Ԫ�صĺ���,�γ��µ���������.
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
			a[k + 1] = temp; // ѭ��������,k+1��j����. =>k=j =>temp,���ƶ�ǰ��a[i]Ӧ�÷���j����.
		}

	}

}

void SortInsert::insertSort2(int a[], int n) {
	int i = 0;
	int j = 0;

	for (i = 1; i < n; i++)
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