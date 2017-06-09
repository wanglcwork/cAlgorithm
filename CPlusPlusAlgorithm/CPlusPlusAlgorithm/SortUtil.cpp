#include "stdafx.h"
#include "SortUtil.h"
#include <iostream>

// 类名和文件名可以不一样,没有java那么严格.
// 一个文件也可以定义多个类.
// void SortHelp::swap(int& a1, int& a2) {
// 	int temp = a1;
// 	a1 = a2;
// 	a2 = temp;
// }

void SortUtil::swap(int& a1, int& a2) {
	int temp = a1;
	a1 = a2;
	a2 = temp;
}

void SortUtil::printArray(int a[], int n) {
	for (size_t i = 0; i < n; i++)
	{
		std::cout << *(a + i) << "";
	}
	std::cout << std::endl;
}
