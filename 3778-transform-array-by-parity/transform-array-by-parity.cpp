class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans(size);
        for (auto& num: nums){
            if (num % 2) ans[--size] = 1;
        }
        return ans;
    }
};