class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0, right = nums.size() - 1, maxPair = 0;
        while (left < right) maxPair = max(maxPair, nums[left++] + nums[right--]);
        return maxPair;
    }
};