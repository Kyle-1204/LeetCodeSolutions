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
    ListNode* frequenciesOfElements(ListNode* head) {
        unordered_map<int, int> mp;
        while (head != NULL){
            mp[head->val]++;
            head = head->next;
        }
        ListNode* node = new ListNode();
        head = node;
        for (auto& val: mp){
            node->next = new ListNode(val.second);
            node = node->next;
        }
        return head->next;
    }
};