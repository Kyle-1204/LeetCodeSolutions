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
    vector<int> vals;
    void getVals(TreeNode* node){
        vals.push_back(node->val);
        if (node->left != NULL) getVals(node->left);
        if (node->right != NULL) getVals(node->right);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        if (root1) getVals(root1);
        if (root2) getVals(root2);
        sort(vals.begin(), vals.end());
        return vals;
    }
};