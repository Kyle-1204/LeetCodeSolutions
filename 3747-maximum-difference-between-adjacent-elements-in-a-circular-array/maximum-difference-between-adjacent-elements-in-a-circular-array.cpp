class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int len = nums.size() - 1, maxDiff = abs(nums[0] - nums[len]);
        for (int i = 0; i < len; i++) maxDiff = max(maxDiff, abs(nums[i] - nums[i+1]));
        return maxDiff;
    }
};