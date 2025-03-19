class Solution {
public:
    int minOperations(vector<int>& nums) {
        int size = nums.size(), numOpps = 0;
        for (int i = 0; i < size - 2; i++){
            if (nums[i] == 0){
                nums[i] = 1;
                nums[i+1] = (nums[i+1] == 0 ? 1 : 0);
                nums[i+2] = (nums[i+2] == 0 ? 1 : 0);
                numOpps++;
            }
        }
        return (nums[size - 2] == 0 || nums[size - 1] == 0 ? -1 : numOpps);
    }
};