class Solution {
public:
    int numberOfSpecialSubstrings(string s) {
        int ans = 0, len = s.length(), right = 0;
        vector<int> chars(26);
        for (int left = 0; left < len; left++){
            while (right < len && chars[s[right] - 'a'] == 0) chars[s[right++] - 'a']++;
            ans += right - left;
            chars[s[left] - 'a']--;
        }
        return ans;
    }
};