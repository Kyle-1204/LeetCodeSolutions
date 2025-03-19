class Solution {
public:
    int numberOfSpecialSubstrings(string s) {
        int ans = 0, len = s.length(), right = 0;
        unordered_map<char, int> mp;
        for (int left = 0; left < len; left++){
            while (right < len && mp[s[right]] == 0) mp[s[right++]]++;
            ans += right - left;
            mp[s[left]]--;
        }
        return ans;
    }
};