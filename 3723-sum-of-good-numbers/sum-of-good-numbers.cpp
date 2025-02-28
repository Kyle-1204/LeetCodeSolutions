class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int len = nums.size(), sum = 0;
        for (int i = 0; i < len; i++){
            if ((i - k < 0 || nums[i] > nums[i - k]) && (i + k >= len || nums[i] > nums[i + k])) sum += nums[i];
        }
        return sum;
    }
};