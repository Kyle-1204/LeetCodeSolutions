/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if (original == target) return cloned;
        queue<pair<TreeNode*, TreeNode*>> q;
        if (original->left != NULL) q.push(make_pair(original->left, cloned->left));
        if (original->right != NULL) q.push(make_pair(original->right, cloned->right));
        while (!q.empty()){
            TreeNode *orig = q.front().first, *clone = q.front().second;
            if (orig == target) return clone;
            if (orig->left != NULL) q.push(make_pair(orig->left, clone->left));
            if (orig->right != NULL) q.push(make_pair(orig->right, clone->right));
            q.pop();
        }
        return NULL;
    }
};