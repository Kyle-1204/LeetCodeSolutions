class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (auto &num: nums) mp[num]++;
        for (auto &freq: mp){
            if (freq.second % 2) return false;
        }
        return true;
    }
};