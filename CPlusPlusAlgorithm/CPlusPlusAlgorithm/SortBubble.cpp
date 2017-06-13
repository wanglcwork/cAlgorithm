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
	int i = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < n-i; j++) // 前面的i个元素已经是有序的泡泡了,只需要比较后面剩余元素的个数.
		{
			if (a[j - 1] > a[j]) // j 的初始值,必须大于1,不然越界了哦.
			{
				// 类方法,得用::操作符来调用,不能用.,java是用.操作符.
				/*SortUtil.swap(a[j - 1], a[j]);*/

				SortUtil::swap(a[j - 1], a[j]);
			}

		}

	}
		
}

void SortBubble::Bubble2(int a[], int n) {
	int i = 0;
	int j = 0;
	bool flag = false;

	// 从小到大,前面的要比后面的小,那如果前面的比后面的大了,是不是应该换个位置.=>java中的比较器或者lambda表达式,就返回1
	for (i = 0; i < n; i++)
	{	
		flag = false;
		for (j = 1; j < n - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				// 类方法,得用::操作符来调用,不能用.,java是用.操作符.
				/*SortUtil.swap(a[j - 1], a[j]);*/

				SortUtil::swap(a[j - 1], a[j]);
				flag = true;
			}

		}

		if (!flag) // 一遍循环,一个泡都没冒的话,就已经有序了,不用再冒泡了.
		{
			break;
		}

	}

}

void SortBubble::Bubble3(int a[], int n) {
	int i = 0;
	int j = 0;
	int k = n;
	int flag = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 1; j < k; j++) // 遍历到上一次冒泡的最后一个交换位置即可.
		{
			if (a[j - 1] > a[j])
			{
				// 类方法,得用::操作符来调用,不能用.,java是用.操作符.
				/*SortUtil.swap(a[j - 1], a[j]);*/

				SortUtil::swap(a[j - 1], a[j]);
				flag = j; // 不是记录true,而是记录了具体的位置.
			}
		}

		if (flag <= 0)
		{
			break;
		}

		k = flag;
		flag = 0;

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
