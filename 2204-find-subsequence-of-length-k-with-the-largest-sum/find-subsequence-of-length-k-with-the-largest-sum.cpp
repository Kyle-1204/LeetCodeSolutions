class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int> copy = nums, ans(k);
        unordered_map<int, int> mp;
        int size = nums.size(), i = 0;
        sort(copy.begin(), copy.end());
        while (k){
            mp[copy[size-k]]++;
            k--;
        }
        for (auto& num: nums){
            if (mp[num] > 0){
                mp[num]--;
                ans[i++] = num;
            }
        }
        return ans;
    }
};