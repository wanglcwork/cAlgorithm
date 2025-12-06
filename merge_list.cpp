#include <iostream>
#include <random>
#include <chrono>

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int _val) : val{_val}, next{nullptr} {
		// nothing
	}
};

void printList(ListNode* head) {
	ListNode* curr = head;
	while (curr != nullptr) {
		std::cout<<curr->val<<" ";
		curr = curr->next;
	}
	std::cout<<std::endl;
}

ListNode* mergeSortedList(ListNode* L1, ListNode* L2) {
	ListNode dummy{0};
	ListNode* curr = &dummy;
	while (L1 != nullptr && L2 != nullptr) {
		if (L1->val <= L2->val) {
			curr->next = L1;
			L1 = L1->next;
		} else {
			curr->next = L2;
			L2 = L2->next;
		}
		curr = curr->next;
	}

	curr->next = (L1 != nullptr) ? L1 : L2;

	return dummy.next;
}

ListNode* mergeUnsortedList(ListNode* L1, ListNode* L2) {
	if (L1 == nullptr) {
		return L2;
	}

	ListNode* curr = L1;
	while (curr->next != nullptr) {
		curr = curr->next;
	}
	curr->next = L2;

	return L1;
}

ListNode* sortList(ListNode* head) {
	if (head == nullptr || head->next == nullptr) {
		return head;
	}

	ListNode* slow = head;
	ListNode* fast = head->next;
	while(fast != nullptr && fast->next != nullptr) {
		slow = slow->next;
		fast = fast->next->next;
	}
	ListNode* mid = slow->next;
	slow->next = nullptr;

	ListNode* left = sortList(head);
	ListNode* right = sortList(mid);

	return mergeSortedList(left, right);
}

int getRandom() {
    static std::mt19937 engine(std::chrono::system_clock::now().time_since_epoch().count());
    static std::uniform_int_distribution<int> int_dist(1, 100);
    return int_dist(engine);
}

void freeList(ListNode* head) {
	ListNode* curr = head;
	while (curr != nullptr) {
		ListNode* tmp = curr;
		curr = curr->next;
		delete tmp;
	}
}

ListNode* buildList(int num) {
	ListNode* head = nullptr;
	ListNode* curr = nullptr;
	for (int i = 0; i < num; ++i)
	{
		ListNode* tmp = new ListNode(getRandom());

		if (head == nullptr) {
			head = tmp;
			curr = tmp;
		} else {
			curr->next = tmp;
			curr = tmp;
		}
	}

	return head;
}

int main(int argc, char const *argv[])
{
	ListNode* head = buildList(10);
	printList(head);

	ListNode* sortedList = sortList(head);
	printList(sortedList);

	freeList(sortedList);

	return 0;
}