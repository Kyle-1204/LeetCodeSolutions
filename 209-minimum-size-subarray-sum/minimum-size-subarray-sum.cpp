class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0, left = 0, right = 0, size = nums.size(), minLen = size;
        while (right < size && sum < target) sum += nums[right++];
        if (sum < target) return 0;
        while (sum >= target){
            minLen = min(minLen, right - left);
            sum -= nums[left++];
            while (right < size && sum < target) sum += nums[right++];
        }
        return minLen;
    }
};