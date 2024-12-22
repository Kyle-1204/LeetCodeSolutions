class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int end = nums.size() - 2, ans = 0;
        for (int i = 0; i < end; i++){
            if ((nums[i] + nums[i+2]) * 2 == nums[i+1]) ans++;
        }
        return ans;
    }
};