class Solution {
private:
    vector<vector<int>> ans;
    void findCombos(int index, int sum, int target, vector<int> candidates, vector<int> currVect){
        int size = candidates.size();
        if (sum >= target || index >= size){
            if (sum == target) ans.push_back(currVect);
            return;
        }
        for (int i = index; i < size; i++){
            vector<int> newVect = currVect;
            newVect.push_back(candidates[i]);
            findCombos(i, sum + candidates[i], target, candidates, newVect);
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        findCombos(0, 0, target, candidates, {});
        return ans;
    }
};