class Solution {
public:
    int minOperations(vector<int>& nums) {
        int numOpps = 0;
        for (int i = 0; i < nums.size() - 1; i++){
            if (nums[i] != nums[i + 1]) numOpps++;
        }
        return numOpps;
    }
};