class Solution {
public:
    int minOperations(vector<int>& nums) {
        int numOpps = 0, size = nums.size();
        for (int i = 1; i < size; i++){
            if (nums[i] <= nums[i-1]){
                int diff = nums[i-1] - nums[i] + 1;
                nums[i] += diff;
                numOpps += diff;
            }
        }
        return numOpps;
    }
};