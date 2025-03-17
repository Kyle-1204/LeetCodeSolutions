class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        bool notSkip = true, right = true;
        vector<int> ans;
        for (auto& row: grid){
            if (right){
                for (auto& val: row){
                    if (notSkip) ans.push_back(val);
                    notSkip = !notSkip;
                }
            }
            else{
                for (int i = row.size() - 1; i >= 0; i--){
                    if (notSkip) ans.push_back(row[i]);
                    notSkip = !notSkip;
                }
            }
            right = !right;
        }
        return ans;
    }
};