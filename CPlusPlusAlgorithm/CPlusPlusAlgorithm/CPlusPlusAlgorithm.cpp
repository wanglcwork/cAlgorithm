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

	const int N = 5;

	int arr1[N] = { 1, 3, 4, 2, 5 }; // N������const����
	SortBubble::Bubble1(arr1, 5);
	SortUtil::printArray(arr1, 5);

	int arr2[N] = { 1, 3, 4, 2, 5 };
	SortBubble::Bubble2(arr2, 5);
	SortUtil::printArray(arr2, 5);

	int arr3[N] = { 1, 4, 5, 2, 3 };
	SortBubble::Bubble3(arr3, 5);
	SortUtil::printArray(arr3, 5);


	system("pause"); // ��Ҫ���� #include <iostream>
	return 0;
}

