class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_map<int, int> mp;
        for (auto& num: nums){
            for (int i = num[0]; i <= num[1]; i++) mp[i]++;
        }
        return mp.size();
    }
};