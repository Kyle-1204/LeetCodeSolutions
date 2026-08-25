class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int minVal = k;
        unordered_map<int, int> mp;
        for (auto& num: nums){
            mp[num]++;
            while(mp.find(minVal) != mp.end()) minVal += k;
        }
        return minVal;
    }
};