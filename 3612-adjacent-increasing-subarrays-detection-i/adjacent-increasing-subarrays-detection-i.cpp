class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int leftPrev = -1001, rightPrev = -1001, currLen = 0;
        for (int i = 0; i < nums.size() - k; i++){
            if (leftPrev < nums[i] && rightPrev < nums[i + k]) currLen++;
            else currLen = 1;
            if (currLen == k) return true;
            leftPrev = nums[i];
            rightPrev = nums[i + k];
        }
        return false;
    }
};