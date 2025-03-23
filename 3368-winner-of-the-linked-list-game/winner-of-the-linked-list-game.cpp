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
    string gameResult(ListNode* head) {
        int oddWins = 0, evenWins = 0;
        while (head != NULL){
            int first = head->val, second = head->next->val;
            if (first % 2 != second % 2){
                if (first < second) oddWins++;
                else evenWins++;
            }
            head = head->next->next;
        }
        if (oddWins > evenWins) return "Odd";
        if (oddWins < evenWins) return "Even";
        return "Tie";
    }
};