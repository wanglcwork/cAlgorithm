// CPlusPlusAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SortBubble.h"
#include "SortUtil.h"
#include "SortInsert.h"
#include "SortShell.h"
#include "SortSelect.h"
#include "SortMerge.h"
#include "SortQuick.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	//test,c++的初始化,对象或者是new 指针,java中不能这样初始化.
	/*SortBubble sb;*/ // 静态方法可以用对象.操作符调用,也可以用指针的箭头操作符调用.

	const int LEN = 5;

// 	// 冒泡排序
// 	int arr1[LEN] = { 1, 3, 4, 2, 5 }; // N必须是const常量
// 	SortBubble::Bubble1(arr1, LEN);
// 	SortUtil::printArray(arr1, LEN);
// 
// 	int arr2[LEN] = { 1, 3, 4, 2, 5 };
// 	SortBubble::Bubble2(arr2, LEN);
// 	SortUtil::printArray(arr2, LEN);
// 
// 	int arr3[LEN] = { 1, 4, 5, 2, 3 };
// 	SortBubble::Bubble3(arr3, LEN);
// 	SortUtil::printArray(arr3, LEN);
// 
// 	// 插入排序
// 	int arr4[LEN] = { 1, 4, 5, 2, 3 };
// 	SortInsert::insertSort1(arr4, LEN);
// 	SortUtil::printArray(arr4, LEN);
// 
// 	int arr5[LEN] = { 1, 4, 0, 2, 3 };
// 	SortInsert::insertSort2(arr5, LEN);
// 	SortUtil::printArray(arr5, LEN);
// 
// 	int arr6[LEN] = { 100, 4, 0, 30, 3 };
// 	SortInsert::insertSort3(arr6, LEN);
// 	SortUtil::printArray(arr6, LEN);

// 	// 希尔排序
// 	int arr7[LEN] = { 1, 4, 5, 2, 3 };
// 	SortShell::shellSort1(arr7, LEN);
// 	SortUtil::printArray(arr7, LEN);
// 
// 	int arr8[LEN] = { 1, 4, 0, 2, 3 };
// 	SortShell::shellSort1(arr8, LEN);
// 	SortUtil::printArray(arr8, LEN);
// 
// 	int arr9[LEN] = { 100, 4, 0, 30, 3 };
// 	SortShell::shellSort1(arr9, LEN);
// 	SortUtil::printArray(arr9, LEN);
// 
// 	// 选择排序
// 	int arr10[LEN] = { 100, 4, 0, 30, 3 };
// 	SortSelect::SortSelect1(arr10, LEN);
// 	SortUtil::printArray(arr10, LEN);

	// 归并排序
	int arr11[LEN] = { 100, 4, 20, 30, 3};
	SortMerge::mergeSort(arr11, LEN);
	SortUtil::printArray(arr11, LEN);

	// 快速排序
	int arr12[LEN] = { 100, 4, 20, 30, 3 };
	SortQuick::quickSort(arr12, 0, LEN-1);
	SortUtil::printArray(arr12, LEN);

	system("pause"); // 需要包含 #include <iostream>
	return 0;
}

