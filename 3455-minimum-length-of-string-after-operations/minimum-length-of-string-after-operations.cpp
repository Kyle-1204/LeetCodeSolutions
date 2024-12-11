class Solution {
public:
    int minimumLength(string s) {
        unordered_map<char, int> mp;
        int ans = 0;
        for (auto& chr: s) mp[chr]++;
        for (auto& val: mp) ans += (val.second % 2 ? 1 : 2);
        return ans;
    }
};