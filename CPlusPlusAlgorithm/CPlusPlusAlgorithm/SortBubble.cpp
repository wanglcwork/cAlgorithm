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
				// 类方法,得用::操作符来调用,不能用.,java是用.操作符.
				/*SortUtil.swap(a[j - 1], a[j]);*/

				SortUtil::swap(a[j - 1], a[j]);
			}

		}

	}
		
}

void SortBubble::Bubble2(int a[], int n) {

	// 从小到大,前面的要比后面的小,那如果前面的比后面的大了,是不是应该换个位置.=>java中的比较器或者lambda表达式,就返回1
	for (size_t i = 0; i < n; i++)
	{
		bool flag = false;
		for (size_t j = 0; j < n - i; j++)
		{
			if (a[j - 1] > a[j])
			{
				// 类方法,得用::操作符来调用,不能用.,java是用.操作符.
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
				// 类方法,得用::操作符来调用,不能用.,java是用.操作符.
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
