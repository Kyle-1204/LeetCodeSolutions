class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int size = nums.size(), numOpps = 0;
        sort(nums.begin(), nums.end());
        if (nums[0] < k) return -1;
        for (int i = 0; i < size; i++){
            if (nums[i] > k){
                k = nums[i];
                numOpps++;
            }
        }
        return numOpps;
    }
};