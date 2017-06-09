#include "stdafx.h"
#include "SortBubble.h"
#include "SortUtil.h"
#include <iostream>

SortBubble::SortBubble()
{
}


SortBubble::~SortBubble()
{
}

void SortBubble::Bubble1(int a[], int n) {

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n-i; j++)
		{
			if (a[j - 1] > a[j])
			{
				// �෽��,����::������������,������.,java����.������.
				/*SortUtil.swap(a[j - 1], a[j]);*/

				SortUtil::swap(a[j - 1], a[j]);
			}

		}

	}
		
}

void SortBubble::Bubble2(int a[], int n) {

	// ��С����,ǰ���Ҫ�Ⱥ����С,�����ǰ��ıȺ���Ĵ���,�ǲ���Ӧ�û���λ��.=>java�еıȽ�������lambda���ʽ,�ͷ���1
	for (size_t i = 0; i < n; i++)
	{
		bool flag = false;
		for (size_t j = 0; j < n - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				// �෽��,����::������������,������.,java����.������.
				/*SortUtil.swap(a[j - 1], a[j]);*/

				SortUtil::swap(a[j - 1], a[j]);
				flag = true;
			}

		}

		if (!flag)
		{
			break;
		}

	}

}

void SortBubble::Bubble3(int a[], int n) {

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				// �෽��,����::������������,������.,java����.������.
				/*SortUtil.swap(a[j - 1], a[j]);*/

				SortUtil::swap(a[j - 1], a[j]);
			}

		}

	}

}

// 
// void SortBubble::swap(int& a1, int& a2) {
// 	int temp = a1;
// 	a1 = a2;
// 	a2 = temp;
// }
// 
// void SortBubble::printArray(int a[], int n) {
// 	for (size_t i = 0; i < n; i++)
// 	{
// 		std::cout << *(a+i) << "";
// 	}
// }
