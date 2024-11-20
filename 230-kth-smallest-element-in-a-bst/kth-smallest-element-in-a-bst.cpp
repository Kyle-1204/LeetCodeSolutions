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
    vector<int> vals;
    void traverse(TreeNode* node){
        vals.push_back(node->val);
        if (node->left != NULL) traverse(node->left);
        if (node->right != NULL) traverse(node->right);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        traverse(root);
        sort(vals.begin(), vals.end());
        return vals[k-1];
    }
};