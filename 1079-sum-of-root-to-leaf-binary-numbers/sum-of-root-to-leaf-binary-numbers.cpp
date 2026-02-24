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
    int sum = 0;
    void traverse(TreeNode* node, string currBin){
        currBin += '0' + node->val;
        if (node->left == NULL && node->right == NULL) sum += stoi(currBin, nullptr, 2);
        else {
            if (node->left != NULL) traverse(node->left, currBin);
            if (node->right != NULL) traverse(node->right, currBin);
        }
    }
public:
    int sumRootToLeaf(TreeNode* root) {
        if (root->left == NULL && root->right == NULL) return root->val;
        string str = "";
        str += '0' + root->val;
        if (root->left != NULL) traverse(root->left, str);
        if (root->right != NULL) traverse(root->right, str);
        return sum;
    }
};