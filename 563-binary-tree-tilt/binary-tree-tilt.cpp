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
private:
    int addVals(TreeNode* node){
        int val = node->val;
        if (node->left != NULL) val += addVals(node->left);
        if (node->right != NULL) val += addVals(node->right);
        return val;
    }
public:
    int findTilt(TreeNode* root) {
        if (!root) return 0;
        int sum = 0;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()){
            TreeNode* node = q.front();
            int left = 0, right = 0;
            if (node->left != NULL){
                q.push(node->left);
                left = addVals(node->left);
            }
            if (node->right != NULL){
                q.push(node->right);
                right = addVals(node->right);
            }
            sum += abs(left - right);
            q.pop();
        }
        return sum;
    }
};