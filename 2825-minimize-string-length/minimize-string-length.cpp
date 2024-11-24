class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_map<char, int> mp;
        for (auto& chr: s) mp[chr]++;
        return mp.size();
    }
};