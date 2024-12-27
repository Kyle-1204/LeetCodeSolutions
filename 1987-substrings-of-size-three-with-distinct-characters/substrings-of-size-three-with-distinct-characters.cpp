class Solution {
public:
    int countGoodSubstrings(string s) {
        int ans = 0, end = s.length() - 3;
        unordered_map<char, int> mp;
        for (int j = 0; j < 3; j++) mp[s[j]]++;
        if (mp.size() == 3) ans++;
        for (int i = 0; i < end; i++){
            mp[s[i]]--;
            if (mp[s[i]] == 0) mp.erase(s[i]);
            mp[s[i+3]]++;
            if (mp.size() == 3) ans++;
        }
        return ans;
    }
};