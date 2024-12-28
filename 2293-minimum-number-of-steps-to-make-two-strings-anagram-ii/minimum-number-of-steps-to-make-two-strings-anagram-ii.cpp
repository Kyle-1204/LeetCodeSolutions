class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> chars(26);
        for (auto& chr: s) chars[chr - 'a']++;
        for (auto& chr: t) chars[chr - 'a']--;
        int ans = 0;
        for (int i = 0; i < 26; i++) ans += abs(chars[i]);
        return ans;
    }
};