class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> indices;
        int size = nums.size();
        for (int i = 0; i < size; i++){
            if (nums[i] < target) continue;
            if (nums[i] == target) indices.push_back(i);
            else break;
        }
        return indices;
    }
};