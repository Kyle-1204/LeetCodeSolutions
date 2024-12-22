class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = 0;
        for (int i = nums.size() - 1; i >= 0; i--){
            if (mp.find(nums[i]) != mp.end()) return i/3 + 1;
            else mp[nums[i]]++;
        }
        return 0;
    }
};