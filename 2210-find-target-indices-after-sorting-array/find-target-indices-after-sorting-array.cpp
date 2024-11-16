class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> indices;
        int size = nums.size(), i = 0;
        while (i < size && nums[i] <= target){
            if (nums[i] == target) indices.push_back(i);
            i++;
        }
        return indices;
    }
};