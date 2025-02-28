class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int len = nums.size(), sum = 0;
        for (int i = 0; i < len; i++){
            int num = nums[i];
            if ((i - k < 0 || num > nums[i - k]) && (i + k >= len || num > nums[i + k])) sum += num;
        }
        return sum;
    }
};