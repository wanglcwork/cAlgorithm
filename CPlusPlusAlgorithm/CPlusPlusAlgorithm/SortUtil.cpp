#include "stdafx.h"
#include "SortUtil.h"
#include <iostream>

// �������ļ������Բ�һ��,û��java��ô�ϸ�.
// һ���ļ�Ҳ���Զ�������.
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
