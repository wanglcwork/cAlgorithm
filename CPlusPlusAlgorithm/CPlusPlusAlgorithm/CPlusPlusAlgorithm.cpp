// CPlusPlusAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SortBubble.h"
#include "SortUtil.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	//test
	SortBubble sb;
	int arr[5] = { 1, 3, 4, 2, 5 };
	sb.Bubble1(arr, 5);
	SortUtil::printArray(arr, 5);

	system("pause"); // ÐèÒª°üº¬ #include <iostream>
	return 0;
}

