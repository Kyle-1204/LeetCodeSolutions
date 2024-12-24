class Solution {
public:
    bool canConstruct(string s, int k) {
        if (s.length() < k) return false;
        unordered_map<char, int> mp;
        for (auto& chr: s) mp[chr]++;
        int count = 0;
        for (auto& cnt: mp){
            if (cnt.second % 2) count++;
        }
        return (count <= k);
    }
};