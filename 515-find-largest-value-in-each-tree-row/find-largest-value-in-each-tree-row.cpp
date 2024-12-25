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
    vector<int> largestValues(TreeNode* root) {
        if (!root) return {};
        queue<pair<int, TreeNode*>> q; //level, node;
        q.push(make_pair(0, root));
        int currLevel = 0, currMax = root->val;
        vector<int> ans;
        while (!q.empty()){
            int level = q.front().first;
            TreeNode* node = q.front().second;
            if (currLevel != level){
                ans.push_back(currMax);
                currLevel = level;
                currMax = node->val;
            }
            else currMax = max(currMax, node->val);
            level++;
            if (node->left != NULL) q.push(make_pair(level, node->left));
            if (node->right != NULL) q.push(make_pair(level, node->right));
            q.pop();
        }
        ans.push_back(currMax);
        return ans;
    }
};