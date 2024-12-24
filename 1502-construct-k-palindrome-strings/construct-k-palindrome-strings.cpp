class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.length() < k) return false;
        unordered_map<char, int> mp;
        for (auto& chr: s) {
            mp[chr]++;
            k -= (mp[chr] % 2 ? 1 : -1);
        }
        return (k >= 0);
    }
};