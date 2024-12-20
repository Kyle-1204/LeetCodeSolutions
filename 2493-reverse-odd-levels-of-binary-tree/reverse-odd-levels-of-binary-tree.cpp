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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<pair<TreeNode*, int>> q; //node, level;
        q.push(make_pair(root, 0));
        stack<int> odds;
        while(!q.empty()){
            TreeNode* node = q.front().first;
            int level = q.front().second;
            if (level % 2){
                node->val = odds.top();
                odds.pop();
                if (node->left != NULL) q.push(make_pair(node->left, level + 1));
                if (node->right != NULL) q.push(make_pair(node->right, level + 1));
            }
            else{
                if (node->left != NULL) {
                    odds.push(node->left->val);
                    q.push(make_pair(node->left, level + 1));
                }
                if (node->right != NULL){
                    odds.push(node->right->val);
                    q.push(make_pair(node->right, level + 1));
                }
            }
            q.pop();
        }
        return root;
    }
};