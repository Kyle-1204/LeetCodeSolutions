class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int currIndex = 0, size = nums.size(), maxFreq = 1, j = 0;
        for(int i = 0; i < size; i++){
            while (nums[j] + 2 * k < nums[i]) j++;
            maxFreq = max(maxFreq, i - j + 1);
        }
        return maxFreq;
    }
};