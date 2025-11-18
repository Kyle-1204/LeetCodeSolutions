class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++){
            for (int start = max(0, i - nums[i]); start <= i; start++) ans += nums[start];
        }
        return ans;
    }
};