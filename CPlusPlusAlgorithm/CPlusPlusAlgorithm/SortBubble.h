#pragma once
class SortBubble
{
public:
	SortBubble();
	~SortBubble();

	// 静态方法即可,不需要实例化SortBubble类
	void static Bubble1(int a[], int n);
	void static Bubble2(int a[], int n);
	void static Bubble3(int a[], int n);

// 	void swap(int& a1, int& a2);
// 	void printArray(int a[], int n);
};

