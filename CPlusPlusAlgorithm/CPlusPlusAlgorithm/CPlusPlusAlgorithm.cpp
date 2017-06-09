// CPlusPlusAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SortBubble.h"
#include "SortUtil.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	//test,c++的初始化,对象或者是new 指针,java中不能这样初始化.
	/*SortBubble sb;*/ // 静态方法可以用对象.操作符调用,也可以用指针的箭头操作符调用.

	int arr1[5] = { 1, 3, 4, 2, 5 };
	SortBubble::Bubble1(arr1, 5);
	SortUtil::printArray(arr1, 5);

	int arr2[5] = { 1, 3, 4, 2, 5 };
	SortBubble::Bubble2(arr1, 5);
	SortUtil::printArray(arr1, 5);

	int arr3[5] = { 1, 4, 5, 2, 3 };
	SortBubble::Bubble3(arr1, 5);
	SortUtil::printArray(arr1, 5);


	system("pause"); // 需要包含 #include <iostream>
	return 0;
}

