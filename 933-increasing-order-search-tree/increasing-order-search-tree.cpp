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
    void addVals(TreeNode* node){
        if (node->left != NULL) addVals(node->left);
        vals.push_back(node->val);
        if (node->right != NULL) addVals(node->right);
    }
public:
    TreeNode* increasingBST(TreeNode* root){
        addVals(root);
        TreeNode* ans = new TreeNode();
        TreeNode* currNode = new TreeNode(vals[0]);
        ans->right = currNode;
        for (int i = 1; i < vals.size(); i++){
            currNode->right = new TreeNode(vals[i]);
            currNode = currNode->right;
        }
        return ans->right;
    }
};