class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<vector<int>> vects(3);
        vector<int> ans;
        for (auto& num: nums){
            if (num < pivot) vects[0].push_back(num);
            else if (num > pivot) vects[2].push_back(num);
            else vects[1].push_back(num);
        }
        for (auto& vect: vects){
            for (auto& num: vect) ans.push_back(num);
        }
        return ans;
    }
};