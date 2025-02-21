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
class FindElements {
public:
    TreeNode* rootNode;
    FindElements(TreeNode* root) {
        rootNode = root;
    }
    
    bool find(int target) {
        rootNode->val = 0;
        return traverse(rootNode, target, 0);
    }

private:
    bool traverse(TreeNode* node, int target, int x){
        if (!node || x > target) return false;
        if (target == x) return true;
        return (traverse(node->left, target, 2 * x + 1) || traverse(node->right, target, 2 * x + 2));
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */