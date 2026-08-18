class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if (k == nums.size()) return *max_element(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        for (auto& num: nums) mp[num]++;
        if (k == 1){
            int maxVal = -1;
            for (auto& val: mp){
                if (val.second == 1) maxVal = max(maxVal, val.first);
            }
            return maxVal;
        }
        else{
            if (mp[nums[0]] != 1 && mp[nums[nums.size() - 1]] != 1) return -1;
            if (mp[nums[0]] != 1) return nums[nums.size() - 1];
            if (mp[nums[nums.size() - 1]] != 1) return nums[0];
            return max(nums[0], nums[nums.size() - 1]);
        }
    }
};