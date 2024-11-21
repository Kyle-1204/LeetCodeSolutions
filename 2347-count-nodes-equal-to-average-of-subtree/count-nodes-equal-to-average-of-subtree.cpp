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
    int numNodes = 0;
    int findAvg(TreeNode* node){
        if (!node) return 0;
        numNodes++;
        return (node->val + findAvg(node->left) + findAvg(node->right));
    }
public:
    int averageOfSubtree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans = 0;
        while (!q.empty()){
            TreeNode* node = q.front();
            if (node->val == findAvg(node)/numNodes) ans++;
            numNodes = 0;
            if (node->left != NULL) q.push(node->left);
            if (node->right != NULL) q.push(node->right);
            q.pop();
        }
        return ans;
    }
};