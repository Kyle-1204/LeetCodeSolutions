class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size()/2;
        for (auto& num: nums){
            mp[num]++;
            if (mp[num] == n) return num;
        }
        return 0;
    }
};