class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size(), minVal = INT_MAX;
        for (int i = 1; i < size; i++) minVal = min(minVal, nums[i] - nums[i-1]);
        return minVal;
    }
};