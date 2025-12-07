#include <iostream>
#include <utility> // 用于 std::move
using namespace std;

// 自定义单链表模板类
template <typename T>
class SinglyLinkedList {
public:
    // 链表节点结构
    struct Node {
        T data;
        Node* next;
        // 节点构造函数
        Node(T val = T(), Node* n = nullptr) : data(std::move(val)), next(n) {}
    };

    // 迭代器类（嵌套在链表中，访问Node需要友元/公有）
    class Iterator {
    private:
        Node* curr; // 指向当前节点的指针
    public:
        // 迭代器构造函数
        explicit Iterator(Node* p = nullptr) : curr(p) {}

        // 1. 重载解引用运算符：获取当前节点的数据
        T& operator*() {
            return curr->data; // 假设迭代器非尾后（尾后迭代器curr为null，解引用未定义）
        }

        // 2. 重载前置自增运算符：移动到下一个节点
        Iterator& operator++() {
            if (curr) curr = curr->next;
            return *this;
        }

        // 3. 重载不等于运算符：比较两个迭代器是否指向不同节点
        bool operator!=(const Iterator& other) const {
            return curr != other.curr;
        }
    };

    // 链表构造函数（空链表）
    SinglyLinkedList() : head(nullptr) {}

    // 析构函数：释放所有节点
    ~SinglyLinkedList() {
        Node* p = head;
        while (p) {
            Node* tmp = p;
            p = p->next;
            delete tmp;
        }
        head = nullptr;
    }

    // 禁用拷贝（简化示例，可按需实现）
    SinglyLinkedList(const SinglyLinkedList&) = delete;
    SinglyLinkedList& operator=(const SinglyLinkedList&) = delete;

    // 尾插法：添加元素（方便测试）
    void push_back(T val) {
        Node* new_node = new Node(std::move(val));
        if (!head) {
            head = new_node;
            return;
        }
        Node* p = head;
        while (p->next) p = p->next;
        p->next = new_node;
    }

    // 4. 链表的begin()：返回指向第一个节点的迭代器
    Iterator begin() {
        return Iterator(head);
    }

    // 5. 链表的end()：返回尾后迭代器（curr为null）
    Iterator end() {
        return Iterator(nullptr);
    }

private:
    Node* head; // 链表头节点指针
};

// 测试：范围for遍历自定义单链表
int main() {
    SinglyLinkedList<int> list;
    list.push_back(10);
    list.push_back(20);
    list.push_back(30);

    // 范围for循环遍历（编译器自动展开为迭代器遍历）
    for (int& num : list) {
        cout << num << " "; // 输出：10 20 30
    }
    cout << endl;

    // 手动迭代器遍历（等价于范围for）
    for (auto it = list.begin(); it != list.end(); ++it) {
        cout << *it << " "; // 输出：10 20 30
    }
    cout << endl;

    return 0;
}