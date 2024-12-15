class Solution {
public:
    int countWays(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int currSelected = 0, size = nums.size(), ans = 0;
        if (nums[0] > 0) ans++;
        if (nums[size - 1] < size) ans++;
        for (int i = 1; i < size; i++){
            if (i > nums[i-1] && i < nums[i]) ans++;
        }
        return ans;
    }
};