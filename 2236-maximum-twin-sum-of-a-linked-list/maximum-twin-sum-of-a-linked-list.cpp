/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int> vals;
        for (ListNode* node = head; node != NULL; node = node->next) vals.push_back(node->val);
        int maxSum = 0, size = vals.size(), half = size/2;
        for (int i = 0; i < half; i++) maxSum = max(maxSum, vals[i] + vals[size - i - 1]);
        return maxSum;
    }
};