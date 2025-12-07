#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    // 哈希表：key = 数组值，value = 对应下标
    unordered_map<int, int> num_map;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        // 检查哈希表中是否存在目标差值
        if (num_map.find(complement) != num_map.end()) {
            // 存在则返回[差值下标, 当前下标]
            return {num_map[complement], i};
        }
        // 不存在则将当前值和下标存入哈希表
        num_map[nums[i]] = i;
    }
    // 题目保证有解，此处仅为语法兜底
    return {};
}

// 测试示例
#include <iostream>
int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> res = twoSum(nums, target);
    cout << "[" << res[0] << ", " << res[1] << "]" << endl; // 输出 [0, 1]
    return 0;
}