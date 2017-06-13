#pragma once

// 类,只能在头文件中定义
// 应该被添加到公共头文件,不用每个实现文件中都去包含了.stdafx.h

class SortUtil {
public:

	// static在头文件,类定义中声明即可,在实现文件中不用再声明方法为static了.
	void static swap(int& a1, int& a2);
	void static printArray(int a[], int n);
};