class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int, int> mp;
        for (auto& num: nums) mp[num]++;
        int freq = -1, first;
        for (auto& val: mp){
            if (val.second != freq){
                if (freq == -1) {
                    freq = val.second;
                    first = val.first;
                }
                else return {first, val.first};
            }
        }
        return {-1, -1};
    }
};