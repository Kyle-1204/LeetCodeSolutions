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
    int sum = 0, maxLevel = 0;
    void traverse(TreeNode* node, int level){
        if (node->left == NULL && node->right == NULL){
            if (level > maxLevel){
                sum = node->val;
                maxLevel = level;
            }
            else if (level == maxLevel) sum += node->val;
        }
        else{
            level++;
            if (node->left != NULL) traverse(node->left, level);
            if (node->right != NULL) traverse(node->right, level);
        }
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        sum = root->val;
        if (root->left != NULL) traverse(root->left, 1);
        if (root->right != NULL) traverse(root->right, 1);
        return sum;
    }
};