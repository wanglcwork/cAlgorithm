// CPlusPlusAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SortBubble.h"
#include "SortUtil.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	//test,c++�ĳ�ʼ��,���������new ָ��,java�в���������ʼ��.
	/*SortBubble sb;*/ // ��̬���������ö���.����������,Ҳ������ָ��ļ�ͷ����������.

	int arr1[5] = { 1, 3, 4, 2, 5 };
	SortBubble::Bubble1(arr1, 5);
	SortUtil::printArray(arr1, 5);

	int arr2[5] = { 1, 3, 4, 2, 5 };
	SortBubble::Bubble2(arr1, 5);
	SortUtil::printArray(arr1, 5);

	int arr3[5] = { 1, 4, 5, 2, 3 };
	SortBubble::Bubble3(arr1, 5);
	SortUtil::printArray(arr1, 5);


	system("pause"); // ��Ҫ���� #include <iostream>
	return 0;
}

