class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.length() < k) return false;
        unordered_map<char, int> mp;
        for (auto& chr: s) mp[chr]++;
        for (auto& cnt: mp){
            if (cnt.second % 2) k--;
        }
        return (k >= 0);
    }
};