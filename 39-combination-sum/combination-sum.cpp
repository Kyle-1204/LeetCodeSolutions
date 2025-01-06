class Solution {
private:
    vector<vector<int>> ans;
    void findCombos(int index, int currVal, vector<int> candidates, vector<int> currVect){
        int size = candidates.size();
        if (currVal <= 0){
            if (currVal == 0) ans.push_back(currVect);
            return;
        }
        for (int i = index; i < size; i++){
            vector<int> newVect = currVect;
            newVect.push_back(candidates[i]);
            findCombos(i, currVal - candidates[i], candidates, newVect);
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        findCombos(0, target, candidates, {});
        return ans;
    }
};