class Solution {
public:
    vector<int> distinctNumbers(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int size = nums.size();
        vector<int> ans(size - k + 1);
        for (int i = 0; i < k; i++) mp[nums[i]]++;
        ans[0] = mp.size();
        for (int i = k; i < size; i++){
            int start = i - k;
            mp[nums[start]]--;
            if (mp[nums[start]] == 0) mp.erase(nums[start]);
            mp[nums[i]]++;
            ans[start + 1] = mp.size();
        }
        return ans;
    }
};