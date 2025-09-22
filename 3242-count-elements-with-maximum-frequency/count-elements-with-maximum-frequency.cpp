class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxVal = 0, freq = 0;
        for (auto num: nums){
            mp[num]++;
            maxVal = max(maxVal, mp[num]);
        }
        for (auto val : mp){
            if (val.second == maxVal) freq++;
        }
        return freq * maxVal;
    }
};