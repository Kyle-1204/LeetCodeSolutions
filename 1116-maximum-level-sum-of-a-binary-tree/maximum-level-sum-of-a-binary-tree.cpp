/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<pair<TreeNode*, int>> q; //level, val
        int maxSum = INT_MIN, currSum = 0, currLevel = 0, ans = 0;
        q.push(make_pair(root, 0));
        while (!q.empty()){
            if (q.front().second > currLevel){
                currLevel = q.front().second;
                if (currSum > maxSum){
                    maxSum = currSum;
                    ans = q.front().second;
                }
                currSum = 0;
            }
            currSum += q.front().first->val;
            if (q.front().first->left != NULL) q.push(make_pair(q.front().first->left, currLevel + 1));
            if (q.front().first->right != NULL) q.push(make_pair(q.front().first->right, currLevel + 1));
            q.pop();
        }
        return (currSum > maxSum ? currLevel + 1 : ans);
    }
};