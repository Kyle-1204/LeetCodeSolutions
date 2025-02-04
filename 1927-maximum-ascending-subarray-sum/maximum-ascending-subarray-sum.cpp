class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int currSum = nums[0], maxSum = 0, size = nums.size();
        for (int i = 1; i < size; i++){
            if (nums[i] > nums[i-1]) currSum += nums[i];
            else{
                maxSum = max(maxSum, currSum);
                currSum = nums[i];
            }
        }
        return max(maxSum, currSum);
    }
};