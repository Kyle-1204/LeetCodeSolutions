class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX, size = nums.size(), end = size - l, index = 0;
        for (int index = 0; index <= end; index++){
            int currSum = 0;
            for (int i = index; i < l + index; i++) currSum += nums[i];
            if (currSum > 0) minSum = min(currSum, minSum);
            for (int j = l + index; j < min(r + index, size); j++){
                currSum += nums[j];
                if (currSum > 0) minSum = min(currSum, minSum);
            }
        }
        return (minSum == INT_MAX ? -1 : minSum);
    }
};