class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        long long prefixSum = 0, score = 0;
        while (score < nums.size() && prefixSum + nums[score] > 0) prefixSum += nums[score++];
        return score;
    }
};