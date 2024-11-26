class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int size = nums.size();
        if (size == 1) return nums[0];
        vector<int> newNums(--size);
        while (size > 1){
            for (int i = 0; i < size; i++) newNums[i] = (nums[i] + nums[i+1]) % 10;
            nums = newNums;
            newNums = vector<int>(--size);
        }
        return (nums[0] + nums[1]) % 10;
    }
};