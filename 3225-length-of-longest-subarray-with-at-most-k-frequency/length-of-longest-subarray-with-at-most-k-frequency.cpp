class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left = 0, right = 0, maxLen = 1;
        unordered_map<int, int> mp;
        while (right < nums.size()){
            mp[nums[right]]++;
            while (mp[nums[right]] > k){
                mp[nums[left]]--;
                left++;
            }
            right++;
            maxLen = max(right - left, maxLen);
        }
        return maxLen;
    }
};