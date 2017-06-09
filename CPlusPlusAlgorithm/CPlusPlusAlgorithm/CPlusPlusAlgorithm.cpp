// CPlusPlusAlgorithm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "SortBubble.h"
#include "SortUtil.h"
#include "SortInsert.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	//test,c++�ĳ�ʼ��,���������new ָ��,java�в���������ʼ��.
	/*SortBubble sb;*/ // ��̬���������ö���.����������,Ҳ������ָ��ļ�ͷ����������.

	const int LEN = 5;

	int arr1[LEN] = { 1, 3, 4, 2, 5 }; // N������const����
	SortBubble::Bubble1(arr1, LEN);
	SortUtil::printArray(arr1, LEN);

	int arr2[LEN] = { 1, 3, 4, 2, 5 };
	SortBubble::Bubble2(arr2, LEN);
	SortUtil::printArray(arr2, LEN);

	int arr3[LEN] = { 1, 4, 5, 2, 3 };
	SortBubble::Bubble3(arr3, LEN);
	SortUtil::printArray(arr3, LEN);

	int arr4[LEN] = { 1, 4, 5, 2, 3 };
	SortInsert::insertSort1(arr4, LEN);
	SortUtil::printArray(arr4, LEN);

	int arr5[LEN] = { 1, 4, 0, 2, 3 };
	SortInsert::insertSort2(arr5, LEN);
	SortUtil::printArray(arr5, LEN);

	int arr6[LEN] = { 100, 4, 0, 30, 3 };
	SortInsert::insertSort3(arr6, LEN);
	SortUtil::printArray(arr6, LEN);


	system("pause"); // ��Ҫ���� #include <iostream>
	return 0;
}

