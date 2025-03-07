class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int rightSum = accumulate(nums.begin(), nums.end(), 0), leftSum = 0, ans = 0;
        for (int i = 0; i < nums.size() - 1; i++){
            leftSum += nums[i];
            rightSum -= nums[i];
            if ((leftSum - rightSum) % 2 == 0) ans++;
        }
        return ans;
    }
};