class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long left = 0, right = accumulate(nums.begin(), nums.end(), 0LL);
        int size = nums.size() - 1, ans = 0;
        for (int i = 0; i < size; i++){
            int num = nums[i];
            left += num;
            right -= num;
            if (left >= right) ans++;
        }
        return ans;
    }
};