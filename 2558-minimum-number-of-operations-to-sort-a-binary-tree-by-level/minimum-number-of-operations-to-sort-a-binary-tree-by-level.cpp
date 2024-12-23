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
    void selectionSort(vector<int> &arr, int &numSwaps){
        int n = arr.size();
        for (int i = 0; i < n; ++i) {
            int min_idx = i;
            for (int j = i + 1; j < n; ++j) {
                if (arr[j] < arr[min_idx]) {
                    min_idx = j; 
                }
            }
            if (i != min_idx){
                numSwaps++;
                swap(arr[i], arr[min_idx]);
            }
        }
    }
public:
    int minimumOperations(TreeNode* root) {
        queue<pair<TreeNode*, int>> q; //node, level
        int ans = 0, currLevel = 0;
        q.push(make_pair(root, 0));
        vector<int> vals;
        while (!q.empty()){
            TreeNode* node = q.front().first;
            int level = q.front().second;
            if (currLevel != level){
                currLevel = level;
                selectionSort(vals, ans);
                vals.clear();
            }
            level++;
            if (node->left != NULL) {
                q.push(make_pair(node->left, level));
                vals.push_back(node->left->val);
            }
            if (node->right != NULL) {
                q.push(make_pair(node->right, level));
                vals.push_back(node->right->val);
            }
            q.pop();
        }
        return ans;
    }
};