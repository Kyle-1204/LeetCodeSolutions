class Solution {
public:
    int minimumLength(string s) {
        vector<int> chars(26);
        int ans = 0;
        for (auto& chr: s) {
            chars[chr - 'a']++;
            if (chars[chr - 'a'] < 3 || chars[chr -'a'] % 2 == 0) ans++;
            else ans--;
        }
        return ans;
    }
};