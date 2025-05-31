class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        queue<int> q;
        for (auto& num: nums) q.push(num);
        vector<int> start;
        createPermutations(q, start);
        return ans;
    }
private:
    vector<vector<int>> ans;
    void createPermutations(queue<int>& q, vector<int>& currCombo){
        if (q.empty()) ans.push_back(currCombo);
        for (int i = 0; i < q.size(); i++){
            vector<int> newCombo = currCombo;
            int front = q.front();
            newCombo.push_back(front);
            q.pop();
            createPermutations(q, newCombo);
            q.push(front);
        }
    }
};