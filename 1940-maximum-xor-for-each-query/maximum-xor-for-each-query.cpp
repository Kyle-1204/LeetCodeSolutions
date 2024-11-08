class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int size = nums.size(), currXOR = nums[0], maxVal = pow(2, maximumBit) - 1;
        vector<int> ans(size);
        for (int i = 1; i < size; i++) {
            ans[size - i] = currXOR ^ maxVal;
            currXOR ^= nums[i];
        }
        ans[0] = currXOR ^ maxVal;
        return ans;
    }
};