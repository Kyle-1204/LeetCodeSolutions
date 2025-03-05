class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int size = nums.size(), right = size - 1;
        vector<int> ans(size);
        for (int i = 0; i < size; i++){
            if (nums[i] % 2) ans[right--] = 1;
        }
        return ans;
    }
};