class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mp;
        for (auto& chr: s) mp[chr]++;
        int minEven = INT_MAX, maxOdd = INT_MIN;
        for (auto& val: mp){
            if (val.second % 2) maxOdd = max(val.second, maxOdd);
            else minEven = min(val.second, minEven);
        }
        return maxOdd - minEven;
    }
};